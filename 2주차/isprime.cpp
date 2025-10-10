#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool isprime(int n);

int main(void)
{
    int a;
    cin >> a;
    if (isprime(a)) {
                cout << a << "은 소수이다." << endl;
    }
    else {
        cout << a << "은 소수가 아니다." << endl;
    }

    return 0;
}

// bool 로 변경
bool isprime(int n)
{
    if (n == 1)
    {
		return false;
    }
    else if (n < 1)
    {
        cout << "음수는 취급안한다.";
		return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else if (n % 2 == 0) {
		return false;
    }
    else
    {
    
        for (int i = 1; 2 * i + 1 <= n; i++)
        {
            if (n % (2 * i + 1) == 0 && n / (2 * i + 1) != 1)
            {
                return false;
                break;
            }
            else
            {
                return true;
                break;
               
            }
        }
    }
}
