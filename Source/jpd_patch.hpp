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
        static inline juce::Font getFont()
        {
#ifdef __APPLE__
            return juce::Font(juce::String("Monaco"), 13.f, juce::Font::plain).withStyle(juce::Font::bold);
#else
            return juce::Font(juce::String("DejaVu Sans Mono"), 12.f, juce::Font::plain).withStyle(juce::Font::bold);
#endif
        }
        
        static inline int getBorderSize() noexcept {return 1;}
        static inline juce::Colour const& getColorBg() noexcept {return juce::Colours::lightgrey;}
        static inline juce::Colour const& getColorBd() noexcept {return juce::Colours::darkgrey;}
        static inline juce::Colour const& getColorTxt() noexcept {return juce::Colours::darkgrey;}
        static inline juce::Colour const& getColorInv() noexcept {static juce::Colour c(juce::Colour::fromFloatRGBA(0.f, 0.f, 0.f, 0.f)); return c;}
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
