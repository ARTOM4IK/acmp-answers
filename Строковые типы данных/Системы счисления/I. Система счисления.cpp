#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    string ans = "";

    while (n > 0)
    {
        long long r = n % 3;

        if (r == 0)
        {
            ans = '3' + ans;
            n = n / 3 - 1;
        }
        else
        {
            ans = char('0' + r) + ans;
            n /= 3;
        }
    }

    cout << ans;
}