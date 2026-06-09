#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
    string surname;

    int sum;
};

bool Compare(Student A, Student B)
{
    if (A.sum != B.sum)
    {
        return A.sum > B.sum;
    }

    return A.surname > B.surname;
}

int main(void)
{
    int N;
    int M;

    cin >> N >> M;

    vector<Student> A(N);

    for (int i = 0; i < N; i++)
    {
        int x;
        int y;
        int z;

        cin >> A[i].surname >> x >> y >> z;

        A[i].sum = x + y + z;
    }

    sort(A.begin(), A.end(), Compare);

    cout << A[M - 1].surname << ' ' << A[M - 1].sum;

    return 0;
}