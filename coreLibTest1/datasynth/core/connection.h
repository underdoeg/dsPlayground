#ifndef CONNECTION_H
#define CONNECTION_H

#include "pin.h"

namespace ds
{

class Connection {

public:
	Connection(PinBase* from, PinBase* to);
	~Connection();
private:
	PinBase* from;
	PinBase* to;
};

}

#endif // CONNECTION_H
