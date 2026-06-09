#include <iostream>
#include <iomanip>
int main ()
{
    int n;
    double b;
    int a[1000];
    int tmp = 0;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                tmp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = tmp;
            }
        }
    }
    
    std::cin >> b;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b)
        {
            b = (b + a[i]) / 2;
        }
    }
    
    printf("%.6lf", b);
    
    return 0;
}