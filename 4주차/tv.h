#ifndef _tv_h
#define _tv_h
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
class Tv {
public:
	bool status = false;
	int channel = 1;
	int volume = 5;
	void showStatus(void);
	void pushPower(void);
	int channelUp(void);
	int channelDown(void);
	int volumeUp(void);
	int volumeDown(void);
};
#endif // !tv.h
