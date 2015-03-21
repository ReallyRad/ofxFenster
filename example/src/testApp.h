#pragma once

#include "ofMain.h"
#include "ofxFensterManager.h"

class testApp : public ofxFensterListener {

public:
	void setup();
	void update();
	void draw(ofxFenster* window);

	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseMoved(int x, int y, ofxFenster* win);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	void mouseMovedEvent(ofMouseEventArgs &args);

	ofVec2f mousePos;

	ofxFenster* test;

	int iconCount;
};
