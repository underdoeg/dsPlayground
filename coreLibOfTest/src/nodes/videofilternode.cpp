#include "videofilternode.h"

using namespace ds;

VideoFilterNode::VideoFilterNode()
{
	videoIn1.connect(boost::bind(&VideoFilterNode::onVideo, this, _1));
}

VideoFilterNode::~VideoFilterNode()
{

}

void VideoFilterNode::onVideo(ofPixels)
{
	cout << "I got video" << endl;
}
