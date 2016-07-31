/*
 // Copyright (c) 2015 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#include "jpd_patch.hpp"

namespace jpd
{
    // ==================================================================================== //
    //                                      JPD PATCH                                       //
    // ==================================================================================== //
    
    patch::patch(xpd::patch const& patch)
    {
        setSize(std::max(patch.width(), 120), std::max(patch.height(), 20));
        setInterceptsMouseClicks(false, true);
        
        std::vector<xpd::object> objects(patch.objects());
        for(size_t i = 0; i < objects.size(); ++i)
        {
            if(objects[i].is_gui())
            {
                
            }
            else
            {
                
            }
        }
        
    }
    
    
    // ==================================================================================== //
    //                                      JPD PATCH WINDOW                                //
    // ==================================================================================== //
    
    patch::window::window(jpd::app& app, xpd::patch const& patch) :
    DocumentWindow(patch.name(), juce::Colours::lightgrey, juce::DocumentWindow::allButtons, true),
    m_application(app)
    {
        setUsingNativeTitleBar(true);
        setSize(600, 500);
        centreWithSize(getWidth(), getHeight());
        setResizable(true, true);
        setVisible(true);
        //setContentOwned(<#juce::Component *newContentComponent#>, <#bool resizeToFitWhenContentChangesSize#>)
    }
    
    void patch::window::closeButtonPressed()
    {
        ;
    }
}
