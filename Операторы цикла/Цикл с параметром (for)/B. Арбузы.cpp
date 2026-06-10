#include <iostream>

int main()
{
    int n = 0;
    int min = 0;
    int max = 0;

    int a[30000];
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    min = a[0];
    max = a[0];
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        
        if (a[i] > max)
        {
            max = a[i];
        }
    }
        std::cout << min << " " << max;
    return 0;
}