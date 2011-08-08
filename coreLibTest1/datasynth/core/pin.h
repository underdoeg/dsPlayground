#ifndef PIN_H
#define PIN_H

#include <iostream>
#include "boost/signals2/signal.hpp"

namespace ds {

/**
 * This is the basic Pin. It has no idea of any data it is holding. Purpose of this class is to have a
 * parent class to the Pins that can be stored in a vector without knowing about types
 * every part of the logic is stored in the base
 **/
class PinBase {
protected:

};

/**
 * Pin is a templated version ofPinBase
 **/
template <class type>
class Pin: public PinBase {
	public:

	Pin():isNewData(false){
	}

	/**
	 * @brief set the data of a pin
	 * @param d
	 */
	void setData(type d) {
		data = d;
		notifyDataChange();
	}

	/**
	 * @brief get the current data of a pin
	 * @return
	 */
	type getData(){
		return data;
	}

	void connect(Pin<type>* p){
		connect(boost::bind(&Pin<type>::setData, p, _1));
	}

	void connect(boost::function<void(type)> f){
		signal.connect(f);
	}

	bool isNewData;
protected:
	void notifyDataChange(){
		signal(data);
	}


private:
	boost::signals2::signal<void (type)> signal;
	type data;

};

}
#endif // PIN_H
