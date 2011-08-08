#ifndef CONNECTION_H
#define CONNECTION_H

#include "pin.h"

namespace ds
{

template <class type>
class Connection {

public:
	Connection(Pin<type>* from_, Pin<type>* to_){
		from = from_;
		to = to_;
		//boost::bind(&Pin<type>::setData, to);
		//boost::function<void(type)> f = boost::bind(&Pin<type>::setData, to, _1);
		//from->signal.connect);//(&Pin<type>::setData, to);
		//from->addListener();

	};
	~Connection();
private:
	Pin<type>* from;
	Pin<type>* to;
};

}

#endif // CONNECTION_H
