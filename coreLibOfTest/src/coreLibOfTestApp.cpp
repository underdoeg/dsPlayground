#include "coreLibOfTestApp.h"

using namespace ds;

//--------------------------------------------------------------
void coreLibOfTestApp::setup(){
	ofSetWindowTitle("coreLibOfTestApp");
	ofBackground(0,0,0);
	ofSetFrameRate(100);
	v1.load("bridge.mp4");
	v2.load("pseudoLive.mp4");

	v1.videoOutPin.connect(&filter.videoIn1);
	filter.videoOut.connect(&render.imgIn);
}

//--------------------------------------------------------------
void coreLibOfTestApp::update(){

}

//--------------------------------------------------------------
void coreLibOfTestApp::draw(){

}

//--------------------------------------------------------------
void coreLibOfTestApp::keyPressed(int key){

}

//--------------------------------------------------------------
void coreLibOfTestApp::keyReleased(int key){

}

//--------------------------------------------------------------
void coreLibOfTestApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void coreLibOfTestApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void coreLibOfTestApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void coreLibOfTestApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void coreLibOfTestApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void coreLibOfTestApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void coreLibOfTestApp::dragEvent(ofDragInfo dragInfo){ 

}
