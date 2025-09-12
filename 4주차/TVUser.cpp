#include "tv.h"

int main(void)
{
  int num = 0;
  bool a = true;
  Tv tv;
  while (a)
  {
    num = 0;
    cout << "\n1. tv의 현재 상태\n2. tv 전원버튼 누르기\n3.채널 올리기\n4. 채널 내리기\n5.볼륨 올리기\n6.볼륨 내리기\n7.프로그램 종료\n원하는 번호를 선택해주세요.\n";
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
