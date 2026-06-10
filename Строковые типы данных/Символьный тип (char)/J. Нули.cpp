#include <iostream>
#include <string>

int main()
{
    int p = 0;
    int max = 0;
    std::string b;
    
    int a[100];
    std::cin >> b;
    
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '0')
        {
            a[i] = 0;
        }
        else if (b[i] == '1')
        {
            a[i] = 1;
        }
    }
    
    
    for (int i = 0; i < b.length(); i++)
    {
        if (a[i] == 0)
        {
            p++;
        }
        if (max < p)
        {
            max = p;
        }
        if (a[i] == 1)
        {
            p = 0;
        }
        
    }
        std::cout << max;
    return 0;
}