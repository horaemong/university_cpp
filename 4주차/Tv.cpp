
#include "tv.h"

void Tv::showStatus(void)
{
	if (status)
	{
		cout << "���� ���� �ִ� ȭ���� �����ִ�." << endl;
	}
	else
	{
		cout << "���� ���� �ִ� ȭ���� �����ִ�." << endl;
	}
}
void Tv::pushPower(void)
{
	if (status)
	{
		status = false;
		cout << "���� tv�� ������." << endl;
	}
	else
	{
		status = true;
		cout << "���� tv�� ������." << endl;
	}
}
int Tv::channelUp(void)
{
	if (status)
	{
		if (channel == 5)
		{
			channel = 1;
			cout << "������ ä���� " << channel << "�� �Դϴ�." << endl;
		}
		else
		{
			channel += 1;
			cout << "������ ä���� " << channel << "�� �Դϴ�." << endl;
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
			cout << "������ ä���� " << channel << "�� �Դϴ�." << endl;
		}
		else
		{
			channel -= 1;
			cout << "������ ä���� " << channel << "�� �Դϴ�." << endl;
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
			cout << "�ִ� �����Դϴ�.";
		}
		else
		{
			volume += 1;
			cout << "������ ������ " << volume << "�Դϴ�." << endl;
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
			cout << "���� �ּ� �����Դϴ�." << endl;
		}
		else
		{
			volume -= 1;
			cout << "������ ������ " << volume << "�Դϴ�." << endl;
		}
		return volume;
	}
}