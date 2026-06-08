#include <iostream>

using namespace std;

struct Information
{
    string surname;
    string name;
    int mark[20];
    int marksum;
    void print(int m)
    {
        cout << name << " " << surname <<  " (";
        for (int i = 0; i < m; i++)
        {
            cout << mark[i] << (i != m - 1 ? " " : ")\n");
        }
    }
};

int main()
{
    int n = 0;
    int m = 0;
    
    cin >> n;
    cin >> m;

    Information p[1000];
    
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].name;
        cin >> p[i].surname;
        
        for (int j = 0; j < m; j++)
        {
            cin >> p[i].mark[j];
        }
        
        p[i].marksum = 0;
        for (int j = 0; j < m; j++)
        {
            p[i].marksum += p[i].mark[j];
        }
    }    
    
    int mx1 = -1;
    int mx2 = -1;
    int mx3 = -1;
    for (int i = 0; i < n; ++i)
    {
        if (mx1 < p[i].marksum)
        {
            if (mx2 < mx1)
            {
                if (mx3 < mx2)
                {
                    mx3 = mx2;
                }
                mx2 = mx1;
            }
            mx1 = p[i].marksum;
        }
        else if (mx2 < p[i].marksum)
        {
            if (mx3 < mx2)
            {
                mx3 = mx2;
            }
            mx2 = p[i].marksum;
        }
        else if (mx3 < p[i].marksum)
        {
            mx3 = p[i].marksum;
        }
    }
    
    for(int i = 0; i < n; ++i)
    {
        if (p[i].marksum >= mx3)
        {
            p[i].print(m);
        }
    }
    
    return 0;
}