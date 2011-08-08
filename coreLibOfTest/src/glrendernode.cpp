#include "glrendernode.h"

GlRenderNode::GlRenderNode()
{
	ofAddListener(ofEvents.draw, this, &GlRenderNode::draw);
}

GlRenderNode::~GlRenderNode()
{
}

void GlRenderNode::draw(ofEventArgs& e)
{
	ofImage img;
	img.setFromPixels(imgIn.getData());
	renderer.draw(img, 0, 0, 0, img.getWidth(), img.getHeight());
}
