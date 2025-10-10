
#include "tv.h"

void Tv::showStatus(void)
{
	if (status)
	{
		cout << "내가 보고 있는 화면은 켜져있다." << endl;
	}
	else
	{
		cout << "내가 보고 있는 화면은 꺼져있다." << endl;
	}
}
void Tv::pushPower(void)
{
	if (status)
	{
		status = false;
		cout << "현재 tv가 꺼졌다." << endl;
	}
	else
	{
		status = true;
		cout << "현재 tv가 켜졌다." << endl;
	}
}
int Tv::channelUp(void)
{
	if (status)
	{
		if (channel == 5)
		{
			channel = 1;
			cout << "현재의 채널은 " << channel << "번 입니다." << endl;
		}
		else
		{
			channel += 1;
			cout << "현재의 채널은 " << channel << "번 입니다." << endl;
		}
		return channel;
	}
}
int Tv::channelDown(void)
{
	if (status)
	{
		if (channel == 1)
		{
			channel = 5;
			cout << "현재의 채널은 " << channel << "번 입니다." << endl;
		}
		else
		{
			channel -= 1;
			cout << "현재의 채널은 " << channel << "번 입니다." << endl;
		}
		return channel;
	}
}
int Tv::volumeUp(void)
{
	if (status)
	{
		if (volume == 10)
		{
			cout << "최대 볼륨입니다.";
		}
		else
		{
			volume += 1;
			cout << "현재의 볼륨은 " << volume << "입니다." << endl;
		}
		return volume;
	}
}
int Tv::volumeDown(void)
{
	if (status)
	{
		if (volume == 0)
		{
			cout << "현재 최소 볼륨입니다." << endl;
		}
		else
		{
			volume -= 1;
			cout << "현재의 볼륨은 " << volume << "입니다." << endl;
		}
		return volume;
	}
}