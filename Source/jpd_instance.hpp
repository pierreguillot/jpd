/*
 // Copyright (c) 2016 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#ifndef JPD_INSTANCE_INCLUDE_HPP
#define JPD_INSTANCE_INCLUDE_HPP

#include "jpd_patch.hpp"

namespace jpd
{
    // ==================================================================================== //
    //                                      JPD INSTANCE                                    //
    // ==================================================================================== //
    
    class Instance :
    virtual public juce::Component,
    public juce::Button::Listener,
    public xpd::processor::listener
    {
    public:
        Instance(xpd::processor& p);
        ~Instance();
        
        void paint(juce::Graphics&) final;
        void buttonClicked(juce::Button* button) final;
        
    private:
        void patch_changed() final;
        
        void openPatch();
        void closePatch();
        void reloadPatch();
        void showAbout();
        void showConsole();
        void showHelp();
        
        xpd::processor&     m_processor;
        DummyWindow         m_window_about;
        DummyWindow         m_window_console;
        juce::TextButton    m_button;
        juce::ScopedPointer<jpd::patch> m_patch;
        
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Instance)
    };
}

#endif // JPD_INSTANCE_INCLUDE_HPP
