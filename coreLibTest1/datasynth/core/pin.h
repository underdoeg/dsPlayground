#ifndef PIN_H
#define PIN_H
namespace ds {

/**
 * This is the basic Pin. It has no idea of any data it is holding. Purpose of this class is to have a
 * parent class to the Pins that can be stored in a vector without knowing about types
 **/
class PinBase {

protected:
	void dataChanged();
};

/**
 * Pin is a templated version ofPinBase
 **/
template <class type>
class Pin: public PinBase {
public:
	void setData(type d) {
		data = d;
		dataChanged();
	}
	type data;
};

}
#endif // PIN_H
