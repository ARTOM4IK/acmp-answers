#include <iostream>
#include <string>

using namespace std;

bool greaterNum(const string& a, const string& b)
{
    if (a.size() != b.size())
        return a.size() > b.size();

    return a > b;
}

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    string mx = a;

    if (greaterNum(b, mx)) mx = b;
    if (greaterNum(c, mx)) mx = c;

    cout << mx;

    return 0;
}