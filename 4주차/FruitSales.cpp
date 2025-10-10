#include"FruitBuyer.h"
#include"FruitSeller.h"

int main(void) {
	FruitBuyer buyer;
	FruitSeller seller;

	seller.numOfApple = 20;
	seller.money = 0;

	buyer.numOfApple = 0;
	buyer.money = 4000;

	buyer.BuyApple(2000, seller);

	seller.ShowResult();
	buyer.ShowResult();

	return 0;
}