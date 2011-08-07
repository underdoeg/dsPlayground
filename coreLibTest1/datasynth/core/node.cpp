#include "node.h"

using namespace ds;

Node::Node()
{
}

Node::~Node()
{
}

void Node::addInPin(PinBase* p)
{
	inPins.push_back(p);
}

void Node::addOutPin(PinBase* p)
{
	outPins.push_back(p);
}

