//
//  Mover.cpp
//  throw_things
//
//  Created by Enrica Beccalli on 3/3/15.
//
//

#include "Mover.h"



void mover::setup(float x, float y){
    
    pos.set(x,y);
    
}

void mover::resetForces(){
    acc*=0.5;
}

void mover::force(ofVec2f _force){
    
    acc += _force;
    
}

void mover::applyDamping(float damping){
    
    acc -= vel.getNormalized()*damping;
    
}

void mover::update(){
    
    
    

    
    
    vel += acc;
    pos += vel;
    
    if (pos.x < 0) {
        pos.x = 0;
        vel.x *= -1;
    }
    
    if (pos.x > ofGetWidth()) {
        pos.x = ofGetWidth();
        vel.x *= -1;
    }
    
    if (pos.y < 0) {
        pos.y = 0;
        vel.y *= -1;
    }
    
    if (pos.y > ofGetHeight()) {
        pos.y = ofGetHeight();
        vel.y *= -1;
    }
    
    
    
    
    if (pos.y > ofGetHeight()) {
        pos.y = ofGetHeight();
        vel.y *= -1;
    }

    
}


void mover::draw(){
    
    
    
    
    
    ofCircle(pos, 10);
    ofCircle(pos, 3);
    
   
    
}


