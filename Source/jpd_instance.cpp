/*
 // Copyright (c) 2016 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#include "jpd_Instance.hpp"

namespace jpd
{
    // ==================================================================================== //
    //                                      JPD INSTANCE                                    //
    // ==================================================================================== //
    
    Instance::Instance(xpd::processor& p) :
    m_processor(p),
    m_window_about(juce::String("About Camomile"), Graphics::getColorBg(), juce::DocumentWindow::closeButton, false),
    m_window_console(juce::String("Camomile Console"), Graphics::getColorBg(), juce::DocumentWindow::closeButton, false),
    m_button("Menu")
    {
        setOpaque(true);
        setWantsKeyboardFocus(true);
        m_processor.add_listener(*this);
        
        m_window_about.setUsingNativeTitleBar(true);
        m_window_about.setBounds(50, 50, 300, 370);
        m_window_about.setResizable(false, false);
        m_window_about.setDropShadowEnabled(true);
        m_window_about.setVisible(true);
        
        m_window_console.setUsingNativeTitleBar(true);
        m_window_console.setBounds(50, 50, 300, 370);
        m_window_console.setResizable(false, false);
        m_window_console.setDropShadowEnabled(true);
        m_window_console.setVisible(true);
    
        m_button.setBounds(0, 0, 40, 20);
        addAndMakeVisible(m_button);
        m_button.addListener(this);
        
        patch_changed();
    }
    
    Instance::~Instance()
    {
        m_window_about.removeFromDesktop();
        m_window_console.removeFromDesktop();
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
        if(static_cast<bool>(patch))
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
        if(static_cast<bool>(patch))
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
        //m_window_about.setContentOwned(new GuiAbout(), false);
        m_window_about.addToDesktop();
        m_window_about.grabKeyboardFocus();
        m_window_about.toFront(true);
    }
    
    void Instance::showConsole()
    {
        //m_window_console(new GuiAbout(), false);
        m_window_console.addToDesktop();
        m_window_console.grabKeyboardFocus();
        m_window_console.toFront(true);
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
                    openPatch();
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

