#include <iostream>
using namespace std;

int main()
{
    long long lx = -1000000;
    long long rx = 1000000;

    long long ly = -1000000;
    long long ry = 1000000;

    while (true)
    {
        long long mx = (lx + rx) / 2;
        long long my = (ly + ry) / 2;

        cout << mx << ' ' << my << endl;
        cout.flush();

        long long di, dj;
        cin >> di >> dj;

        if (di == 0 && dj == 0)
        {
            return 0;
        }

        if (di == 1)
        {
            lx = mx + 2;
            rx = rx + 1;
        }
        else if (di == -1)
        {
            lx = lx - 1;
            rx = mx - 2;
        }
        else
        {
            lx = rx = mx;
        }

        if (dj == 1)
        {
            ly = my + 2;
            ry = ry + 1;
        }
        else if (dj == -1)
        {
            ly = ly - 1;
            ry = my - 2;
        }
        else
        {
            ly = ry = my;
        }

        if (lx == rx && ly == ry)
        {
            cout << lx << ' ' << ly << endl;
            cout.flush();

            cin >> di >> dj;
            return 0;
        }
    }

    return 0;
}