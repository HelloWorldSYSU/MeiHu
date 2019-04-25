/* The player should have two attributes:
	(int)_money(just money ^^)
	(int)_positon(Currently in the position of the map)
   And there are several operations:
   	 void move(int steps); (change positon of the map)
   	 void depositChange(int change); (Change the deposit when making money or spending money)
*/
#include <assert.h>

class Player
{
private:

	int _money = 2000;
	int _positon = 0;

public:

	Player(int money, int positon){
		_money = money;
		_positon = positon;
	};

	void move(int steps){
		assert(steps >= 1 && steps <= 6);
		_positon += steps;
		_positon %= 38;
	}

	void depositChange(int change){
		_money += change;
	}
	
};