#include "tv.h"

int main(void)
{
  int num = 0;
  bool a = true;
  Tv tv;
  while (a)
  {
    num = 0;
    cout << "\n1. tv�� ���� ����\n2. tv ������ư ������\n3.ä�� �ø���\n4. ä�� ������\n5.���� �ø���\n6.���� ������\n7.���α׷� ����\n���ϴ� ��ȣ�� �������ּ���.\n";
    cin >> num;

    switch (num)
    {
    default:
      return 0;
      break;
    case 1:
      tv.showStatus();
      break;
    case 2:
      tv.pushPower();
      break;
    case 3:
      tv.channelUp();
      break;
    case 4:
      tv.channelDown();
      break;
    case 5:
      tv.volumeUp();
      break;
    case 6:
      tv.volumeDown();
      break;
    case 7:
      a = false;
      break;
    }
  }
  return 0;
}
