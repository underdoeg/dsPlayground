#ifndef VIDEONODE_H
#define VIDEONODE_H

#include "core/node.h"
#include "ofMain.h"

class VideoNode: public ds::Node, public ofThread {

public:
	VideoNode();
	~VideoNode();
	void load(string videoFile);
	void threadedFunction();

	ds::Pin< ofPixels > videoOutPin;
	ofPixels data;

private:
	string videoFile;
	ofVideoPlayer* player;
};

#endif // VIDEONODE_H
