#ifndef GLRENDERNODE_H
#define GLRENDERNODE_H

#include "core/node.h"
#include "ofMain.h"

class GlRenderNode: public ds::Node{

public:
	GlRenderNode();
	~GlRenderNode();
	void draw(ofEventArgs &e);

	ds::Pin<ofPixels> imgIn;
private:
	ofGLRenderer renderer;
};

#endif // GLRENDERNODE_H
