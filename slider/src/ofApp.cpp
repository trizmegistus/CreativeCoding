//////////////////////////////////
/////////  QUESTIONS  ///////////
////////////////////////////////
//// > Why does the background seem to be refreshing? 
//// > Why isn't the GUI showing up?




#include "ofApp.h"
#include "ofxGui.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//GUI ADD-ON
	gui.setup();
	gui.add(speed.setup("speed", 1.0, 0.0, 5.0));


	ofBackground(100, 100);

	angle = 1;
	angle2 = 1.5;
	speed = 0.5;
	rectLength = 200;
	rect2Length = 300;
	ofSetBackgroundAuto(false);

}

//--------------------------------------------------------------
void ofApp::update(){
	
	
	angle = angle+speed;
	rectLength = speed * 100;
	angle2 = angle*1.5;
	rect2Length = rectLength*1.5;

	//if (ofGetMousePressed()) {
	//	posX = mouseX;
	//	posY = mouseY;
	//}
	//else {
		posX = ofGetWidth() / 2;
		posY = ofGetHeight() / 2;
	//}



}

//--------------------------------------------------------------
void ofApp::draw(){
	ofPushMatrix();

	ofTranslate(posX, posY);

	ofSetColor(ofRandom(150,255), ofRandom(150,255), 0);
	ofRotate(angle2);
	ofDrawRectangle(0, 0, 100, rectLength);

	ofSetColor(0, ofRandom(150,255), ofRandom(150,255));
	ofRotate(angle);
	ofDrawRectangle(0, 0, 50, rect2Length);

	ofPopMatrix();

	gui.draw();

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
