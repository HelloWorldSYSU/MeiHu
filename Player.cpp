/* The player should have two attributes:
	(int)_money(just money ^^)
	(int)_positon(Currently in the position of the map)
   And there are several operations:
   	 void move(int steps); (change positon of the map)
   	 void depositChange(int change); (Change the deposit when making money or spending money)
*/
#include<assert.h>
#include<istream>

class Player
{
private:

	int _money = 2000;
	int _position = 0;

public:

	Player(int money, int position){
		_money = money;
		_position = position;
	};

	void move(int steps){
		assert(steps >= 1 && steps <= 6);
		_position += steps;
		_position %= 38;
	}

	void depositChange(int change){
		_money += change;
	}
	
	int Getmoney() { return _money; }
	int Getposition() { return _position; }
	friend std::istream& operator >>(std::istream &in, Player &p) { in >> p._money >> p._position; return in; }
};