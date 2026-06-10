#include <iostream>

int main()
{
    long long a = 0;
    int sum = 0;
    
    std::cin >> a;
    
    if (a > 0)
    {
    std::cout << (a * (a + 1)) / 2;
    }
    else if (a <= 0)
    {
    std::cout << 1 - ((abs(a) * (abs(a) + 1) / 2));
    }
    return 0;
}