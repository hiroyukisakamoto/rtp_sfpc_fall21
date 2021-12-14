#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    grabber.listDevices();
    grabber.setDeviceID(1);
    grabber.setup(640, 480);
}

//--------------------------------------------------------------
void ofApp::update()
{
    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw()
{
    // grabber.draw(0, 0);　
    grabber.draw(grabber.getWidth(), 0);

    for (int y = 0; y < grabber.getHeight(); y += 5)
    {
        ofPolyline line;
        for (int x = 0; x < grabber.getWidth(); x++)
        {
            float brightness = grabber.getPixels().getColor(x, y).getBrightness();

            line.addVertex(x, y + ofMap(brightness, 0, 255, 0, mouseX));
        }
        line = line.getSmoothed(5);
        line.draw();
    }
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
