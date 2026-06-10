#include <iostream>

int main()
{

    int n = 0;
    int c = 0;
    
    int a[100][100];
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            c += (a[i][j] == 1 ? 1: 0);
        }
    }
    
    std::cout << c;
    
    return 0;
}