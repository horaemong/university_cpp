#ifndef _FruitBuyer_h
#define _FruitBuyer_h
#include "FruitSeller.h"

class FruitBuyer
{
public:
	int numOfApple;
	int money;

	int BuyApple(int,FruitSeller&);
	void ShowResult(void);
};
#endif // !_FruitBuyer_h