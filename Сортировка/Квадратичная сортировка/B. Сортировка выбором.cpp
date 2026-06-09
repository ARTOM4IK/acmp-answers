#include <iostream>

int main ()
{
    
    int n;
    int a[1000];
    int tmp = 0;
    int inv = 0;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        int max = 0;
        
        for (int i = 0; i < n - j; i++)
        {
            if (a[i] > a[max])
            {
                max = i;
            }
        }
        
        std::cout << max << " ";
        
        int c = a[max];
        a[max] = a[n - 1 - j];
        a[n - 1 - j] = c;
        
    }
    
    return 0;
}