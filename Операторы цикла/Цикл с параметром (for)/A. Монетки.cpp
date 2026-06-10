#include <iostream>

int main()
{
    int n = 0;
    int orel = 0;
    int reshka = 0;

    int a[100];
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            reshka++;
        }
        else
        {
            orel++;
        }
    }
    
    if (orel < reshka)
    {
        std::cout << orel;
    }
    else
    {    
        std::cout << reshka;
    }
    return 0;
}