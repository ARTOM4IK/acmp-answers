#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    getline(cin, s);

    stringstream ss(s);

    int x;
    int pos = 1;

    int maxEven = -10001;
    int minOdd = 10001;

    while (ss >> x)
    {
        if (pos % 2 == 0)
        {
            if (x > maxEven)
            {
                maxEven = x;
            }
        }
        else
        {
            if (x < minOdd)
            {
                minOdd = x;
            }
        }

        pos++;
    }

    cout << maxEven + minOdd;

    return 0;
}