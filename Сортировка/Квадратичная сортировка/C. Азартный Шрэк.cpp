#include <iostream>

int main ()
{
    
    int n;
    int a[1000];
    int tmp = 0;
    int max = 0;
    
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
    
    for (int i = n / 2; i < n; i++)
    {
        max += a[i];
    }
    
    for (int i = 0; i < n / 2; i++)
    {
        max -= a[i];
    }
    
    std::cout << max;
    
    return 0;
}