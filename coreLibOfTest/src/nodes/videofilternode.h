#ifndef VIDEOFILTERNODE_H
#define VIDEOFILTERNODE_H

#include "ofMain.h"
#include "core/node.h" // Base class: ds::Node

class VideoFilterNode : public ds::Node {

public:
	VideoFilterNode();
	~VideoFilterNode();

	void onVideo(ofPixels);

	ds::Pin<ofPixels> videoIn1;
	ds::Pin<ofPixels> videoIn2;
};

#endif // VIDEOFILTERNODE_H
