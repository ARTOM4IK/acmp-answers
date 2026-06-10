#include <iostream>

using namespace std;

int main()
{
    long long n;
    int k;

    cin >> n >> k;

    long long sum = 0;
    long long pr = 1;

    while (n > 0)
    {
        int d = n % k;

        sum += d;
        pr *= d;

        n /= k;
    }

    cout << pr - sum;
}