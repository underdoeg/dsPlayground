#include "videonode.h"

using namespace ds;

VideoNode::VideoNode()
{
	addOutPin(new Pin< ofPixels_<unsigned char> >() );
}

VideoNode::~VideoNode()
{
}

