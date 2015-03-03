//
//  Mover.h
//  throw_things
//
//  Created by Enrica Beccalli on 3/3/15.
//
//

#ifndef __throw_things__Mover__
#define __throw_things__Mover__

#include <iostream>

#endif /* defined(__throw_things__Mover__) */




#pragma once
#include "ofMain.h"

class mover {
public:
    void setup(float x, float y);
    void update();
    void draw();
    
    void force(ofVec2f _force);
    void resetForces();
    void applyDamping(float damping);
    
    
    ofVec2f pos, vel, acc;
    
    
    
};