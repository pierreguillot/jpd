/*
 // Copyright (c) 2016 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#include "jpd_app.hpp"
//#include "app_CommandIDs.hpp"

namespace jpd
{
    class interface : public juce::Component, public instance::listener, public juce::Button::Listener
    {
    public:
        interface(instance& inst) : m_instance(inst)
        {
            setOpaque(true);
            setSize(600, 420);
            setWantsKeyboardFocus(true);
            m_instance.add_listener(*this);
            /*
            addAndMakeVisible(m_patcher);
            addAndMakeVisible(m_button);
            m_button.addListener(this);
             */
            patch_changed();
        }
        
        ~interface();
        void paint(juce::Graphics& g) final;
        void buttonClicked(juce::Button* button) final;
        void patch_changed() final;
    private:
        instance&           m_instance;
        
        /*
        GuiPatcher          m_patcher;
        GuiFlowerButton     m_button;
        GuiWindow           m_window;
         */
        
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(interface)
    };
    
    
    void app::initialise(juce::String const& commandLine)
    {
        xpd::environment::initialize();
        m_instance = new jpd::instance();
        m_command  = new juce::ApplicationCommandManager();
        m_command->registerAllCommandsForTarget(this);
        juce::LookAndFeel::getDefaultLookAndFeel().setUsingNativeAlertWindows(true);
    }
    
    void app::anotherInstanceStarted(juce::String const& command_line)
    {
        ;
    }
    
    void app::shutdown()
    {
        m_instance    = nullptr;
        xpd::environment::clear();
    }
    
    void app::systemRequestedQuit()
    {
        quit();
    }
    
    const juce::String app::getApplicationName()
    {
        return ProjectInfo::projectName;
    }
    
    const juce::String app::getApplicationVersion()
    {
        return ProjectInfo::versionString;
    }
    
    bool app::moreThanOneInstanceAllowed()
    {
        return false;
    }
    
    // ================================================================================ //
    //                                  APPLICATION MENU                                //
    // ================================================================================ //
    
    
    void app::getAllCommands(juce::Array<juce::CommandID>& commands)
    {
        juce::JUCEApplication::getAllCommands(commands);
        commands.add(0x200030);
        commands.add(0x200040);
    }
    
    void app::getCommandInfo(juce::CommandID commandID, juce::ApplicationCommandInfo& result)
    {
        switch(commandID)
        {
            case 0x200030:
            {
                result.setInfo(TRANS("Open..."), TRANS("Open a file"), "General", 0);
                result.addDefaultKeypress('o', juce::ModifierKeys::commandModifier);
                break;
            }
            case 0x200040:
            {
                result.setInfo(TRANS("Close..."), TRANS("Close the file"), "General", 0);
                result.addDefaultKeypress('w', juce::ModifierKeys::commandModifier);
                break;
            }
            default:
            {
                JUCEApplication::getCommandInfo(commandID, result); break;
            }
        }
    }
    
    bool app::perform(InvocationInfo const& info)
    {
        switch(info.commandID)
        {
            case 0x200030:
            {
                std::cout << "open\n";
                return true;
            }
            case 0x200040:
            {
                std::cout << "close\n";
                return true;
            }
            default :
            {
                return JUCEApplication::perform(info);
            }
        }
        return true;
    }
}
