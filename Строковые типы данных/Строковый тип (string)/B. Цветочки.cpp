#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    string a[3] =
    {
        "GCV",
        "VGC",
        "CVG"
    };

    cout << a[k % 3];

    return 0;
}