#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    
    ofBackground(255,100,100);
    
    
    
    
    
    
    move.setup(ofGetMouseX(),ofGetMouseY());
    
    grav.set(0,0.9);
    
    thrown = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
  move.resetForces();
    move.force(grav);
    move.applyDamping(0.3);
    move.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetColor(255);
    
  
    
    
    move.draw();
    
  
   
    

    
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    if (!thrown) {
        throwBegin.set(ofGetMouseX(), ofGetMouseY());
        thrown = true;
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    move.pos.set(ofGetMouseX(), ofGetMouseY());
    ofVec2f throwVec;
    
    throwVec.x = ofGetMouseX() - throwBegin.x;
    throwVec.y = ofGetMouseY() - throwBegin.y;
    
    move.vel = throwVec*0.1;
    thrown = false;
    
}