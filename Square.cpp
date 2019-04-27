#include<istream>
class Square
{
	/* Each common square should have three attributes includes:
	(int)_owner(_owner = 1 means its owner is player, 0 means its owner is AI, -1 means nobody owns it)
	(int)_value(_value should be randomly assigned from 10 to 300)
	(bool)_status(whether it is added investment)
	*/
private:

	int _owner = -1;
	int _value = 0;
	bool _status = false;

public:
	Square(int owner = -1, int value = 0, bool status = false) : _owner(owner), _value(value), _status(status) {};
	int Getowner() { return _owner; }
	int Getvalue() { return _value; }
	int Getstatus() { return _status; }
	friend std::istream& operator >>(std::istream &in, Square &s) { in >> s._owner >> s._value >> s._status; return in; }
};