#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
    string surname;
    string name;
    string clas;
    string birth;

    int number;
    char letter;
};

bool Compare(Student A, Student B)
{
    if (A.number != B.number)
    {
        return A.number < B.number;
    }

    if (A.letter != B.letter)
    {
        return A.letter < B.letter;
    }

    return A.surname < B.surname;
}

int main(void)
{
    int N;

    cin >> N;

    vector<Student> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].surname;
        cin >> A[i].name;
        cin >> A[i].clas;
        cin >> A[i].birth;

        int pos = 0;

        while (pos < (int)A[i].clas.size() &&
               isdigit(A[i].clas[pos]))
        {
            pos++;
        }

        A[i].number =
            stoi(A[i].clas.substr(0, pos));

        A[i].letter = A[i].clas[pos];
    }

    sort(A.begin(), A.end(), Compare);

    for (int i = 0; i < N; i++)
    {
        cout << A[i].clas << ' ' << A[i].surname << ' '
          << A[i].name << ' ' << A[i].birth << '\n';
    }

    return 0;
}