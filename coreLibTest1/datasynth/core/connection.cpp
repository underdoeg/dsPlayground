#include "connection.h"

namespace ds
{

Connection::Connection(PinBase* f, PinBase* t)
{
	from = f;
	to = t;
}

Connection::~Connection()
{
}

}

