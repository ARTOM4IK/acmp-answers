#include <iostream>

using namespace std;

int main( void )
{
    long long N;
    long long M;

    cin >> N >> M;

    long long E;
    long long add;

    E = 2 * N * M + N + M;

    if (N == 1 || M == 1)
    {
        if (N > M)
        {
            add = N - 1;
        }
        else
        {
            add = M - 1;
        }
    }
    else
    {
        if (N % 2 == 1 && M % 2 == 1)
        {
            add = N + M - 2;
        }
        else
        {
            add = N + M;
        }
    }

    cout << E + add;

    return 0;
}