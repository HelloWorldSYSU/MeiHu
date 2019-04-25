/* The computer should have 4 attributes:
		(int)_money
		(int)_position
		(double)_purchaseProbability(In order to determine whether the computer is purchased in a random function)
		(double)_additionalInvestmentProbability(In order to determine whether the computer 
			will add investment in a random function)
	And there are several operations:
		void move(int steps); (change positon of the map)
   	 	void depositChange(int change); (Change the deposit when making money or spending money)
   	 	bool ifPurchase(); 
   	 	boll ifAddInvestment;
*/
#include <assert.h>
#include <random>
#include <random>
#include <time.h>

class Computer
{
private:

	int _money = 2000;
	int _position = 0;
	double _purchaseProbability = 0.4;
	double _additionalInvestmentProbability = 0.3;

public:

	Computer(int money = 2000, int positon = 0, double pP = 0.4, double aP = 0.3): _money(money), _position(positon),
			_purchaseProbability(pP), _additionalInvestmentProbability(aP){};
	
	void move(int steps){
		assert(steps >= 1 && steps <= 6);
		_position += steps;
		_position %= 38;
	}

	void depositChange(int change){
		_money += change;
	}

	bool ifPurchase(){
		std::default_random_engine generator(time(NULL));
		std::uniform_int_distribution<int> dis(0,100);
		if(dis(generator) <= (int)(100 * _purchaseProbability)){
			return true;
		}
		return false;
	}

	bool ifAddInvestment(){
		std::default_random_engine generator(time(NULL));
		std::uniform_int_distribution<int> dis(0,100);
		if(dis(generator) <= (int)(100 * _additionalInvestmentProbability)){
			return true;
		}
		return false;
	}
};