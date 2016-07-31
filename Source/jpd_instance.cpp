/*
 // Copyright (c) 2016 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#include "jpd_Instance.hpp"

namespace jpd
{
    Instance::Window::Window() :
    juce::DocumentWindow(juce::String(), Graphics::getColorBg(), juce::DocumentWindow::closeButton, false)
    {
        setUsingNativeTitleBar(true);
        setBounds(50, 50, 300, 370);
        setResizable(false, false);
        setDropShadowEnabled(true);
        setVisible(true);
    }
    
    void Instance::Window::closeButtonPressed()
    {
        removeFromDesktop();
    }
    
    void Instance::Window::setContent(juce::String& name, juce::Component* content)
    {
        setContentOwned(content, false);
        setName(name);
        addToDesktop();
        grabKeyboardFocus();
        toFront(true);
        setAlwaysOnTop(true);
    }
    
    // ==================================================================================== //
    //                                      JPD INSTANCE                                    //
    // ==================================================================================== //
    
    Instance::Instance(xpd::processor& p) : m_processor(p)
    {
        setOpaque(true);
        setSize(600, 420);
        setWantsKeyboardFocus(true);
        m_processor.add_listener(*this);
        
        //addAndMakeVisible(m_button);
        
        //m_button.addListener(this);
        patch_changed();
    }
    
    Instance::~Instance()
    {
        m_processor.remove_listener(*this);
    }
    
    
    void Instance::paint(juce::Graphics& g)
    {
        juce::String text;
        g.fillAll(Graphics::getColorBg());
        g.setColour(Graphics::getColorBd());
        g.drawRect(getBounds().withZeroOrigin(), Graphics::getBorderSize());
        g.drawLine(0.f, 20.f, getWidth(), 20.f, Graphics::getBorderSize());
        g.setFont(Graphics::getFont());
        g.setColour(Graphics::getColorTxt());
        
        
        xpd::patch const patch = m_processor.get_patch();
        if(bool(patch))
        {
            g.drawText(juce::String(patch.name()).upToLastOccurrenceOf(juce::StringRef(".pd"), false, false),
                       0, 0, getWidth(), 20, juce::Justification::centred);
        }
        else
        {
            g.drawText(juce::String("No Patch"), 0, 0, getWidth(), 20, juce::Justification::centred);
        }
    }
    
    
    void Instance::patch_changed()
    {
        const xpd::patch patch = m_processor.get_patch();
        if(bool(patch))
        {
            /*
            m_patch.setPatch(m_processor, patch);
            setSize(m_patch.getWidth(), m_patch.getHeight() + 20);
             */
        }
    }
    
    void Instance::openPatch()
    {
        xpd::patch const patch = m_processor.get_patch();
        juce::FileChooser fc("Open a patch...",
                             static_cast<bool>(patch) ? juce::File(patch.path()) : juce::File::getSpecialLocation(juce::File::userDocumentsDirectory)
                             , "*.pd", true);
        if(fc.browseForFileToOpen())
        {
            juce::File file(fc.getResult());
            if(file.getFileExtension() == juce::String(".pd"))
            {
                m_processor.load_patch(file.getFileName().toStdString(),
                                       file.getParentDirectory().getFullPathName().toStdString());
            }
        }
    }
    
    void Instance::closePatch()
    {
        m_processor.close_patch();
    }
    
    void Instance::reloadPatch()
    {
        xpd::patch const patch = m_processor.get_patch();
        if(static_cast<bool>(patch))
        {
            m_processor.load_patch(patch.name(), patch.path());
        }
    }
    
    void Instance::showAbout()
    {
        //m_window.setContentOwned("About Camomile " + String(JucePlugin_VersionString), new GuiAbout(), false);
    }
    
    void Instance::showConsole()
    {
        //m_window.setContent("Camomile Console", new GuiConsole(m_processor));
    }
    
    void Instance::showHelp()
    {
        juce::URL("https://github.com/pierreguillot/Camomile/wiki").launchInDefaultBrowser();
    }
    
    void Instance::buttonClicked(juce::Button* button)
    {
        if(button)
        {
            juce::PopupMenu m;
            m.addItem(1, "About");
            m.addItem(2, "Open");
            m.addItem(3, "Close");
            m.addItem(4, "Reload");
            m.addItem(5, "Console");
            m.addItem(6, "Help");
            
            const int result = m.showAt(button->getScreenBounds());
            switch(result) {
                case 1:
                    showAbout();
                    break;
                case 2:
                    showAbout();
                    break;
                case 3:
                    closePatch();
                    break;
                case 4:
                    reloadPatch();
                    break;
                case 5:
                    showConsole();
                    break;
                case 6:
                    showHelp();
                    break;
                    
                default:
                    break;
            }
        }
    }
    
}

