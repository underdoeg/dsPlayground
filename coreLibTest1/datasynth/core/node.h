#ifndef NODE_H
#define NODE_H

#include <vector>
#include "pin.h"

namespace ds {

class Node {
public:
	Node();
	~Node();
	void addInPin(PinBase* p);
	void addOutPin(PinBase* p);

protected:
	std::vector<PinBase*> inPins;
	std::vector<PinBase*> outPins;
};

}
#endif // NODE_H
