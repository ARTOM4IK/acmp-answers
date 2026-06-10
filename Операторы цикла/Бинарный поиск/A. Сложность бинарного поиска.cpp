#include <iostream>

using namespace std;

int main(void)
{
    unsigned long long n;
    cin >> n;

    unsigned long long p = 1;
    int ans = 0;

    while (p < n)
    {
        p *= 2;
        ans++;
    }

    cout << ans;

    return 0;
}