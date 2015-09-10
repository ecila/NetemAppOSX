#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    notes.setup();
    myFont.loadFont("Bravura.ttf", 64, true, true);
    
    sampleString = "♩ ♪ ♫ ♬ ♭ ♮ ♯ ";
    
    characters = myFont.getStringAsPoints(sampleString);

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
//    notes.render();
    myFont.drawString(sampleString, 100,100);
    
    myFont.drawStringAsShapes(sampleString, 100,200);
    
    vector<ofPath>::iterator iter = characters.begin();
    for (; iter != characters.end(); ++iter)
        (*iter).draw(100,300);
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
