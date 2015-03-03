#pragma once

#include "ofMain.h"
#include "Mover.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    
    mover move;
    
    int nBalls;
    
    ofVec2f grav;
    
    ofVec2f prevPos, releasePos;
    ofVec2f throwBegin, throwVec;
    
    Boolean thrown;
};