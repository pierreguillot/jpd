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
}
