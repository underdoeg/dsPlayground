#include "videonode.h"

using namespace ds;

void VideoNode::load(string videoFile)
{
	addOutPin(&videoOutPin);
	player.loadMovie(videoFile);
	if(player.isLoaded()){
		startThread();
	}
}


void VideoNode::threadedFunction()
{
	videoOutPin.setData(data);
}
