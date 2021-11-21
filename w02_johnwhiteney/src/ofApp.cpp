#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetBackgroundAuto(false);
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void ofApp::update()
{
}
//--------------------------------------------------------------
void ofApp::draw()
{
    float x, y;      //x, y座標
    float A = 200.0; //振幅
    // float w = 0.05;  //角周波数

    // ⇩extra
    float w = 10; //角周波数

    ofSetColor(0, 0, 0, 20);
    ofEnableBlendMode(OF_BLENDMODE_MULTIPLY); //重なりあった色の暗い部分を強調する
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofEnableBlendMode(OF_BLENDMODE_ADD); //色を重ねるほど明るくなる

    // float rad = TWO_PI / 15.0;
    // ⇩extra
    float rad = TWO_PI / 27.0;

    std::printf("rad: %f\n", rad);
    ofSetColor(200, 205, 215, 127);

    // float r = 200.0;
    // float deg = ((ofGetFrameNum() + sin(i)) / 360.0 * (2.0 * PI));
    // float x = sin(deg * 1) * r + ofGetWidth() / 2.0;
    // float y = sin(deg * 0.6) * r + ofGetHeight() / 3;
    // ofDrawRectangle(x, y, 1, ofGetHeight() / 3);
    // x = A * sin(w * t);

    x = A * cos(w * t);
    y = -A * sin(w * t * 2);
    ofDrawRectangle(x + ofGetWidth() / 2, y + ofGetHeight() / 3, 1, ofGetHeight() / 3); //円を描く
    t += rad;                                                                           //時間を進める
    ofSaveFrame(true);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}