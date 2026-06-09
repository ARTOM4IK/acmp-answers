#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
    long long x;
    int index;
};

bool Compare(Point A, Point B)
{
    return A.x < B.x;
}

int main(void)
{
    int N;

    cin >> N;

    vector<Point> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].x;

        A[i].index = i + 1;
    }

    sort(A.begin(), A.end(), Compare);

    long long bestDistance =
        A[1].x - A[0].x;

    int leftIndex = A[0].index;
    int rightIndex = A[1].index;

    for (int i = 1; i < N - 1; i++)
    {
        long long distance =
            A[i + 1].x - A[i].x;

        if (distance < bestDistance)
        {
            bestDistance = distance;

            leftIndex = A[i].index;
            rightIndex = A[i + 1].index;
        }
    }

    cout << bestDistance << '\n';
    cout << leftIndex << ' ' << rightIndex;

    return 0;
}