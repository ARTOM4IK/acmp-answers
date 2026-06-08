#include <iostream>
#include <vector>

using namespace std;

int main( void )
{
    int N;

    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int K;

    cin >> K;

    K = ((K % N) + N) % N;

    for (int i = 0; i < N; i++)
    {
        if (i > 0)
        {
            cout << ' ';
        }

        cout << a[(i - K + N) % N];
    }

    return 0;
}