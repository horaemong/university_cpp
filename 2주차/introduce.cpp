#include <iostream>

using std::cout;
using std::endl;

void introduce(const char *name, int age = 20, const char *from = "���ѹα�");

int main(void)
{
  introduce("��ȣ��");
  return 0;
}

void introduce(const char *name, int age, const char *from)
{

  cout << "�ȳ��ϼ���, �� �̸��� " << name << "�Դϴ�.\n���� " << age << "���̰�, " << from << "���� �Խ��ϴ�." << endl;
}
