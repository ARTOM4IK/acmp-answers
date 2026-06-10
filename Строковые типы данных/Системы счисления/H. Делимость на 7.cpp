#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        int ost = 0;

        for (int i = 0; i < s.size(); i++)
        {
            ost = (ost * 2 + s[i] - '0') % 7;
        }

        if (ost == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }

        if (n)
        {
            cout << '\n';
        }
    }
}