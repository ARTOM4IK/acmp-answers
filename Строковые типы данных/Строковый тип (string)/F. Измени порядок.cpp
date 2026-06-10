#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    cin.ignore();

    for (int i = 0; i < k; i++)
    {
        string s;
        getline(cin, s);

        vector<string> a;
        string x;
        stringstream ss(s);

        while (ss >> x)
            a.push_back(x);

        for (int j = (int)a.size() - 1; j >= 0; j--)
        {
            cout << a[j];

            if (j)
                cout << ' ';
        }

        if (i + 1 < k)
            cout << '\n';
    }

    return 0;
}