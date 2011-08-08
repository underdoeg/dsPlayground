#ifndef GLRENDERNODE_H
#define GLRENDERNODE_H

#include "core/node.h"
#include "ofMain.h"

class glRenderNode: public ds::Node{

public:
	glRenderNode();
	~glRenderNode();

private:
	ofGLRenderer renderer;
};

#endif // GLRENDERNODE_H
