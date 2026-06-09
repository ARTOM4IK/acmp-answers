#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<long long> A;

    long long x;

    while (cin >> x)
    {
        A.push_back(x);
    }

    sort(A.begin(), A.end());

    long long d = A[1] - A[0];

    for (int i = 2; i < (int)A.size(); i++)
    {
        if (A[i] - A[i - 1] != d)
        {
            cout << "No";

            return 0;
        }
    }

    cout << "Yes";

    return 0;
}