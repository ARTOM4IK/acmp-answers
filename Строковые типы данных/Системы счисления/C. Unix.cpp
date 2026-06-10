#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    long long n = 0;
    long long m = 0;

    for (int i = 0; i < a.size(); i++)
    {
        n = n * 3 + (a[i] - '0');
    }

    for (int i = 0; i < b.size(); i++)
    {
        m = m * 3 + (b[i] - '0');
    }

    cout << n + m;
}