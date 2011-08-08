#include "videonode.h"

using namespace ds;

VideoNode::VideoNode() {
	addOutPin(&videoOutPin);
}

VideoNode::~VideoNode() {
	//delete player;
}

void VideoNode::load(string vf) {
	videoFile = vf;
	startThread(true, false);
}


void VideoNode::threadedFunction() {
	//tried to create and play the video player in a thread. Didn't work. Because of OF? I think GST should be able to handle it?
	/*player = new ofVideoPlayer();
	player->setUseTexture(false);
	player->loadMovie(videoFile);
	player->play();
	 */
	data.allocate(640, 480, OF_IMAGE_COLOR);
	while (isThreadRunning() != 0) {
		lock();
		//filling with random data instead
		ofColor_< unsigned char > colr;
		for(int i=0; i<2000; i++) {
			colr.set(ofRandom(255));
			data.setColor(int(ofRandom(0, data.getWidth())), int(ofRandom(0, data.getHeight())), colr);
		}
		videoOutPin.setData(data);
		unlock();
		ofSleepMillis(30);
	}
}
