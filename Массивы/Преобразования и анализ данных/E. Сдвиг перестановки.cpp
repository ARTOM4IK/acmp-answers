#include <iostream>
#include <vector>

using namespace std;

int main( void )
{
    int n;

    cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<int> a(2 * n);

    for (int i = 0; i < n; i++)
    {
        a[i] = p[i];
        a[i + n] = p[i];
    }

    int i = 0;
    int j = 1;
    int k = 0;

    while (i < n && j < n && k < n)
    {
        if (a[i + k] == a[j + k])
        {
            k++;
        }
        else
        {
            if (a[i + k] > a[j + k])
            {
                i = i + k + 1;

                if (i <= j)
                {
                    i = j + 1;
                }
            }
            else
            {
                j = j + k + 1;

                if (j <= i)
                {
                    j = i + 1;
                }
            }

            k = 0;
        }
    }

    int pos;

    if (i < j)
    {
        pos = i;
    }
    else
    {
        pos = j;
    }

    for (int t = 0; t < n; t++)
    {
        if (t > 0)
        {
            cout << ' ';
        }

        cout << a[pos + t];
    }

    return 0;
}