/*
 // Copyright (c) 2016 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#ifndef JPD_PATCH_INCLUDE_HPP
#define JPD_PATCH_INCLUDE_HPP

#include "jpd_instance.hpp"

namespace jpd
{
    class app;
    
    // ==================================================================================== //
    //                                      JPD PATCH                                       //
    // ==================================================================================== //
    
    class patch : public juce::Component
    {
    public:
        patch(xpd::patch const& patch);
        ~patch() = default;
        
        class window;
    private:
        juce::OwnedArray<juce::Component>   m_objects;
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(patch)
    };
    
    
    class patch::window : public juce::DocumentWindow
    {
    public:
        window(jpd::app& app, xpd::patch const& patch);
        ~window() = default;
        
    private:
        
        void closeButtonPressed() final;
        
        jpd::app& m_application;
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(window)
    };
}

#endif // JPD_PATCH_INCLUDE_HPP
