#include <iostream>

using namespace std;

int main(void)
{
    char c;

    cin >> c;

    if (c >= 'a' && c <= 'z')
    {
        c = c - 'a' + 'A';
    }

    cout << c;

    return 0;
}