#ifndef PIN_H
#define PIN_H
namespace ds {

/**
 * This is the basic Pin. It has no idea of any data it is holding. Purpose of this class is to have a
 * parent class to the Pins that can be stored in a vector without knowing about types
 * every part of the logic is stored in the base
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
	/**
	 * @brief set the data of a pin
	 * @param d
	 */
	void setData(type d) {
		data = d;
		dataChanged();
	}

	/**
	 * @brief get the current data of a pin
	 * @return
	 */
	type getData(){
		return data;
	}
private:
	type data;
};

}
#endif // PIN_H
