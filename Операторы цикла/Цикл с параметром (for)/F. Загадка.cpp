#include <iostream>
#include <cmath>

int main()
{
    int s = 0;
    int p = 0;
    
    std::cin >> s >> p;
    
    
    
    std::cout << (s - sqrt(pow(s, 2) - (4 * p))) / 2 << " " << (s + sqrt(pow(s, 2) - (4 * p))) / 2;
    return 0;
}