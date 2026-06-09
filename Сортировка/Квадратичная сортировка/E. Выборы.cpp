#include <iostream>
int main()
{
    int n;
    int a[30000];
    int tmp;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if ( a[i] > a[i + 1])
            {
                tmp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = tmp;
            }
        }
    }
    
    int sum = 0;
    
    for (int i = 0; i < n / 2 + 1; i++)
    {
        sum += a[i] / 2 + 1;
    }
    
    std::cout << sum;
    
    return 0;
}