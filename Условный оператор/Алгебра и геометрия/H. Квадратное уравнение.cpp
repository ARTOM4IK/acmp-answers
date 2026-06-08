#include <iostream>
#include <cmath>
#include <iomanip>

int main( void )
{
    long long a, b, c;
    std::cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                std::cout << -1;
            }
            else
            {
                std::cout << 0;
            }
        }
        else
        {
            std::cout << 1 << '\n';
            std::cout << std::fixed << std::setprecision(6) << -(double)c / b;
        }
        return 0;
    }

    long long d = 1LL * b * b - 4LL * a * c;

    if (d < 0)
    {
        std::cout << 0;
    }
    else if (d == 0)
    {
        std::cout << 1 << '\n';
        std::cout << std::fixed << std::setprecision(6) << -(double)b / (2.0 * a);
    }
    else
    {
        double sd = std::sqrt((double)d);

        double x1 = (-b - sd) / (2.0 * a);
        double x2 = (-b + sd) / (2.0 * a);

        if (x1 > x2)
        {
            std::swap(x1, x2);
        }
        std::cout << 2 << '\n';
        std::cout << std::fixed << std::setprecision(6) << x1 << '\n' << x2;
    }

    return 0;
}