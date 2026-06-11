#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    vector<double> a;
    int x;

    while (cin >> x && x != 0)
    {
        a.push_back(x);
    }

    double sum = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
    }

    double avg = sum / a.size();

    double s = 0;

    for (int i = 0; i < a.size(); i++)
    {
        s += (a[i] - avg) * (a[i] - avg);
    }

    s /= (a.size() - 1);

    cout << fixed << setprecision(6) << sqrt(s);

    return 0;
}