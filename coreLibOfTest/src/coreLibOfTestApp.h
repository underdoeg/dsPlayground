#pragma once

#include "glrendernode.h"
#include "videofilternode.h"
#include "ofMain.h"
#include "videonode.h"

class coreLibOfTestApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		VideoNode v1;
		VideoNode v2;
		VideoFilterNode filter;
		GlRenderNode render;
};
