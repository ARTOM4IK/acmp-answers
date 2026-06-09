#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Athlete
{
    string country;
    string name;
    string surname;

    vector<int> jumps;
};

bool Compare(Athlete A, Athlete B)
{
    for (int i = 0; i < 6; i++)
    {
        int x = 0;
        int y = 0;

        if (i < (int)A.jumps.size())
        {
            x = A.jumps[i];
        }

        if (i < (int)B.jumps.size())
        {
            y = B.jumps[i];
        }

        if (x != y)
        {
            return x > y;
        }
    }

    return false;
}

int main(void)
{
    int N;

    cin >> N;

    vector<Athlete> A;

    for (int i = 0; i < N; i++)
    {
        Athlete cur;

        cin >> cur.country
            >> cur.name
            >> cur.surname;

        for (int j = 0; j < 6; j++)
        {
            string s;

            cin >> s;

            if (s != "x")
            {
                int pos = s.find('.');

                int value = stoi(s.substr(0, pos)) * 100 +
                  stoi(s.substr(pos + 1));

                cur.jumps.push_back(value);
            }
        }

        sort(cur.jumps.begin(),
             cur.jumps.end(),
             greater<int>());

        if (!cur.jumps.empty())
        {
            A.push_back(cur);
        }
    }

    if (A.empty())
    {
        cout << "No results.";

        return 0;
    }

    sort(A.begin(), A.end(), Compare);

    int winners = min(3, (int)A.size());

    for (int i = 0; i < winners; i++)
    {
        cout << i + 1 << ") " < A[i].country << ' '
          << A[i].name << ' ' << A[i].surname << ' ';

        cout << A[i].jumps[0] / 100 << '.';

        if (A[i].jumps[0] % 100 < 10)
        {
            cout << '0';
        }

        cout << A[i].jumps[0] % 100 << '\n';
    }

    return 0;
}