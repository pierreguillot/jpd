/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "jpd.hpp"

//! @brief The main application.
class jpd_app : public juce::JUCEApplication
{
public:
    
    //! @brief The constructor.
    jpd_app() = default;
    
    //! @brief The destrcutor.
    ~jpd_app() = default;
    
    //! @brief Called when the application starts.
    void initialise(juce::String const& commandLine) final
    {
        xpd::environment::initialize();
        m_command  = new juce::ApplicationCommandManager();
        m_command->registerAllCommandsForTarget(this);
        m_windows  = new window(getApplicationName());
        juce::LookAndFeel::getDefaultLookAndFeel().setUsingNativeAlertWindows(true);
    }
    
    //! @brief Indicates that the user has tried to start up another instance of the app.
    void anotherInstanceStarted(juce::String const& command_line) final {}
    
    //! @brief Called to allow the application to clear up before exiting.
    void shutdown() final
    {
        m_windows = nullptr;
        m_command = nullptr;
        xpd::environment::clear();
    }
    
    //! @brief Called when the operating system is trying to close the application.
    void systemRequestedQuit() final
    {
        quit();
    }
    
    //! @brief Returns the application's name.
    const juce::String getApplicationName() final
    {
        return ProjectInfo::projectName;
    }
    
    //! @brief Returns the application's version number.
    const juce::String getApplicationVersion() final
    {
        return ProjectInfo::versionString;
    }
    
    //! @brief Checks whether multiple instances of the app are allowed.
    bool moreThanOneInstanceAllowed() final
    {
        return false;
    }
    
    
    //! @brief This must return a complete list of commands that this target can handle.
    void getAllCommands(juce::Array<juce::CommandID>& commands) final
    {
        juce::JUCEApplication::getAllCommands(commands);
        commands.add(0x200030);
        commands.add(0x200040);
    }
    
    //! @brief This must provide details about one of the commands that this target can perform.
    void getCommandInfo(juce::CommandID commandID, juce::ApplicationCommandInfo& result) final
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
    
    //! @brief This must actually perform the specified command.
    bool perform(InvocationInfo const& info) final
    {
        switch(info.commandID)
        {
            case 0x200030:
            {
                return true;
            }
            case 0x200040:
            {
                return true;
            }
            default :
            {
                return JUCEApplication::perform(info);
            }
        }
        return true;
    }
    
    //! @brief The main window of the application.
    class window : public juce::DocumentWindow
    {
    public:
        window(juce::String name) : juce::DocumentWindow(name, juce::Colours::lightgrey, juce::DocumentWindow::allButtons)
        {
            setUsingNativeTitleBar(true);
            setContentOwned(new jpd::Instance(m_processor), true);
            setFullScreen(true);
            setVisible(true);
        }
        
        void closeButtonPressed() override
        {
            juce::JUCEApplication::getInstance()->systemRequestedQuit();
        }
        
    private:
        xpd::processor m_processor;
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(window)
    };
    
    
private:
    
    juce::ScopedPointer<juce::DocumentWindow>            m_windows;
    juce::ScopedPointer<juce::ApplicationCommandManager> m_command;
};

START_JUCE_APPLICATION(jpd_app)
