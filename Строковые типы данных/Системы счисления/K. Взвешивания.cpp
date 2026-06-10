#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char c;
    long long n;

    cin >> c >> n;

    vector<long long> L;
    vector<long long> R;

    long long w = 1;

    while (n > 0)
    {
        int r = n % 3;

        if (r == 2)
        {
            r = -1;
            n++;
        }

        if (r == 1)
        {
            if (c == 'L')
            {
                R.push_back(w);
            }
            else
            {
                L.push_back(w);
            }
        }
        else if (r == -1)
        {
            if (c == 'L')
            {
                L.push_back(w);
            }
            else
            {
                R.push_back(w);
            }
        }

        n /= 3;
        w *= 3;
    }

    cout << "L:";

    for (int i = 0; i < L.size(); i++)
    {
        if (i)
        {
            cout << ' ';
        }

        cout << L[i];
    }

    cout << '\n';

    cout << "R:";

    for (int i = 0; i < R.size(); i++)
    {
        if (i)
        {
            cout << ' ';
        }

        cout << R[i];
    }
}