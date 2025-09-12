#include <iostream>

using std::cout;
using std::endl;

void introduce(const char *name, int age = 20, const char *from = "대한민국");

int main(void)
{
  introduce("이호재");
  return 0;
}

void introduce(const char *name, int age, const char *from)
{

  cout << "안녕하세요, 제 이름은 " << name << "입니다.\n저는 " << age << "살이고, " << from << "에서 왔습니다." << endl;
}
