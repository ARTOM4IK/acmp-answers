#include <iostream>

using namespace std;

int main(void)
{
    int k;

    cin >> k;

    int n = 1 << k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;

            if (i == j)
            {
                x = 2 * n - 1;
            }
            else
            {
                int g = i ^ j;

                if (i < j)
                {
                    x = 2 * g - 1;
                }
                else
                {
                    x = 2 * g;
                }
            }

            if (j > 0)
            {
                cout << " ";
            }

            cout << x;
        }

        cout << "\n";
    }

    return 0;
}