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

// bool 로 변경
void isprime(int n)
{
    if (n == 1)
    {
        cout << "1은 소수가 아니다.";
    }
    else if (n < 1)
    {
        cout << "음수는 취급안한다.";
    }
    else if (n == 2)
    {
        cout << "2는 소수이다.";
    }
    else if (n % 2 == 0) {
        cout << n << "은 소수가 아니다.";
    }
    else
    {
        // 여기 살펴보기
        for (int i = 1; 2 * i + 1 >= n; i++)
        {
            if (n % (2 * i + 1) == 0 && n / (2 * i + 1) != 1)
            {
                cout << n << "은 소수가 아니다.";
                break;
            }
            else
            {
                cout << n << "은 소수이다.";
                break;
               
            }
        }
    }
}
