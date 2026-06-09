#include <iostream>

int main()
{
    int n;
    int a[100];
    int tmp;
    int m;
    int h;
    int s;
    
    std::cin >> n;
    
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> h;
        std::cin >> m;
        std::cin >> s;
        
        h *= 3600;
        m *= 60;
        s += h + m;
        
        a[i] = s;
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
    
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] / 3600 << " " << a[i] % 3600 / 60 << " " << a[i] % 3600 % 60 << std::endl;
    }
    
    return 0;
}