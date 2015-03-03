#include "ofApp.h"
int myCircleX;
int myCircleY;
int myCircleRadius;
float color;

//--------------------------------------------------------------
void ofApp::setup(){
    
    myCircleX = 300;
    myCircleY = 200;
    myCircleRadius = 20;
    color = of
   

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
    if (myCircleX > 1024){
        
     
        //ofBackground(155, 100, 255);
        myCircleX = 300;
        
    }
   

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    //myCircleX += 1;
    ofSetColor(155, 100, 255);
    ofCircle(myCircleX, myCircleY, myCircleRadius);
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    myCircleX += 100;
    myCircleRadius +=10;
    
    

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
