/*
 // Copyright (c) 2016 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#ifndef JPD_PATCH_INCLUDE_HPP
#define JPD_PATCH_INCLUDE_HPP

#include "../zpd/xpd/xpd.hpp"
#include "../JuceLibraryCode/JuceHeader.h"

namespace jpd
{
    class Graphics
    {
    public:
        static inline juce::Font& getFont()
        {
            static juce::Font f(juce::String(xpd::environment::font_name()),
                                static_cast<float>(xpd::environment::font_size()),
                                xpd::environment::font_name() == std::string("normal") ? juce::Font::plain : juce::Font::bold);
            return f;
        }
        
        static inline int getBorderSize() noexcept {return 1;}
        static inline juce::Colour const& getColorBg() noexcept {return juce::Colours::lightgrey;}
        static inline juce::Colour const& getColorBd() noexcept {return juce::Colours::darkgrey;}
        static inline juce::Colour const& getColorTxt() noexcept {return juce::Colours::darkgrey;}
        static inline juce::Colour const& getColorInv() noexcept {static juce::Colour c(juce::Colour::fromFloatRGBA(0.f, 0.f, 0.f, 0.f)); return c;}
    };
    
    class DummyWindow : public juce::DocumentWindow
    {
    public:
        DummyWindow(const juce::String& name,
                    juce::Colour backgroundColour,
                    int requiredButtons,
                    bool addToDesktop = true) :
        juce::DocumentWindow(name, backgroundColour, requiredButtons, addToDesktop) {};
        ~DummyWindow() = default;
        void closeButtonPressed() override {removeFromDesktop();}
    };
    
    
    
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
}

#endif // JPD_PATCH_INCLUDE_HPP
