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

	ofVideoPlayer* player;
private:
	ds::Pin< ofPixels_<unsigned char> > videoOutPin;
	ofPixels_<unsigned char> data;
	string videoFile;
};

#endif // VIDEONODE_H
