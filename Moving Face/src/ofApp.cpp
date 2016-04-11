#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(0, 0, 0);
	faceX = 100;
	faceY = 100;
	moveX = ofRandom(5);
	moveY = ofRandom(5);
	mousey = false;


}

//--------------------------------------------------------------
void ofApp::update() {

	//MOTION
	if (ofGetMousePressed()) {
		faceX = mouseX;
		faceY = mouseY;
	}
	else {
		faceX = faceX + moveX;
		faceY = faceY + moveY;
			if (faceX > 1000 || faceX < 0) {
				moveX = moveX* -1;
			}

			if (faceY > 1000 || faceY < 0) {
				moveY = moveY* -1;
			}
	}


}


//--------------------------------------------------------------
void ofApp::draw(){
	
//DRAW FACE

	// Background
	ofFill(); 
	ofSetCircleResolution(100);
	ofHideCursor();
	ofSetColor(254, 250, 0); //Makes background YELLOW
	ofDrawCircle(faceX, faceY, 50); //Draws background circle

	//Facial features
	ofSetColor(0, 0, 0); //Makes features BLACK
	ofDrawCircle(faceX - 15, faceY - 15, 10);  //Left eye
	ofDrawCircle(faceX + 15, faceY - 15, 10);  //Right eye
	ofDrawLine(faceX - 15, faceY + 15, faceX + 15, faceY + 15);  //Mouth

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	ofGetKeyPressed();
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
	mousey = false;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
