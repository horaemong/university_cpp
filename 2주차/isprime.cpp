#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void isprime(int n);

int main(void)
{
    int a;
    cin >> a;
    isprime(a);
    return 0;
}

// bool �� ����
void isprime(int n)
{
    if (n == 1)
    {
        cout << "1�� �Ҽ��� �ƴϴ�.";
    }
    else if (n < 1)
    {
        cout << "������ ��޾��Ѵ�.";
    }
    else if (n == 2)
    {
        cout << "2�� �Ҽ��̴�.";
    }
    else if (n % 2 == 0) {
        cout << n << "�� �Ҽ��� �ƴϴ�.";
    }
    else
    {
        // ���� ���캸��
        for (int i = 1; 2 * i + 1 >= n; i++)
        {
            if (n % (2 * i + 1) == 0 && n / (2 * i + 1) != 1)
            {
                cout << n << "�� �Ҽ��� �ƴϴ�.";
                break;
            }
            else
            {
                cout << n << "�� �Ҽ��̴�.";
                break;
               
            }
        }
    }
}
