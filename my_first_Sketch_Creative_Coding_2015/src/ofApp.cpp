#include "ofApp.h"

//In those 2 new lines of code, we "declared" 2 new variables: one called myCircleX and one called myCircleY:

int myCircleX;
int myCircleY;

//--------------------------------------------------------------
void ofApp::setup(){
    /*This function is called at the very beginning of the life of your application, before your program window opens. So, letÕs say, for instance, you wanted to set the size of the window. You probably want this to happen before the window actually opens, so setup would be a good place for that.*/
    
    ofSetFrameRate(60); //make the animation smooth
    myCircleX= 300;
    myCircleY= 200;
    
    // the code above says: increment myCircleX by one, test if myCircleX is greater than 1024, only if that test turns out to be true, set myCircleX back to 300;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    //update() is typically used for updating the state of your program (i.e.: changing the value of variables)
    
    // to not let the circle disappear from the screen we update a new position for the X
    
    ofBackground(130, 150, 100);
    
    if(myCircleX > 1024)
    {
        myCircleX = 300;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    //draw() is used to actually draw things into your window.
    
    myCircleX+=4; //this is the shortcut for: myCircleX = myCircleY+4;
    
    ofSetColor(0,255, 255);
    ofCircle(myCircleX, myCircleY, 30);

    //ofSetColor(100, 200, 150);
    //ofCircle(myCircleX, myCircleY, 30);
    
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);  //to see the framerate
    
    
    
    /* ofRect draws a rectangle. arguments are (x, y, width, height)
     ofTriangle draws a triangle. arguments are the coordinates of the three points: (x1, y1, x2, y2, x3, y3)
     ofLine draws a line. arguments are the start coordinate and the end coordinate (x1, y1, x2, y2)
     ofEllipse arguments are: (x, y, width, height)
     ofCurve Draws a curve from point (x1, y1) to point (x2, y2). The curve is shaped by the two control points (x0,y0) and (x3,y3). */
    
    
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
