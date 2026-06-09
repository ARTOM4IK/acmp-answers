#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    int size = n * n;

    vector<vector<int>> A(size, vector<int>(size));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        vector<bool> used(size + 1, false);

        for (int j = 0; j < size; j++)
        {
            int x = A[i][j];

            if (x < 1 || x > size || used[x])
            {
                cout << "Incorrect";
                return 0;
            }

            used[x] = true;
        }
    }

    for (int j = 0; j < size; j++)
    {
        vector<bool> used(size + 1, false);

        for (int i = 0; i < size; i++)
        {
            int x = A[i][j];

            if (x < 1 || x > size || used[x])
            {
                cout << "Incorrect";
                return 0;
            }

            used[x] = true;
        }
    }

    for (int blockRow = 0; blockRow < n; blockRow++)
    {
        for (int blockCol = 0; blockCol < n; blockCol++)
        {
            vector<bool> used(size + 1, false);

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int x = A[blockRow * n + i][blockCol * n + j];

                    if (x < 1 || x > size || used[x])
                    {
                        cout << "Incorrect";
                        return 0;
                    }

                    used[x] = true;
                }
            }
        }
    }

    cout << "Correct";

    return 0;
}