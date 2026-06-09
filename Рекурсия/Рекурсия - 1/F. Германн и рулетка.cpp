#include <iostream>

void f(int n, int k, int c, int* a, int now)
{
    if (c == k)
    {
        for (int i = 0; i < k; i++)
        {
            std::cout << a[i] << ' ';
        }
        std::cout << std::endl;
        return;
    }

	for (int i = now; i <= n; i++)
	{
        a[c] = i;
        f(n, k, c + 1, a, i + 1);
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
    int mas[100];

	std::cin >> a >> b;

	f(a, b, 0, mas, 1);

	return 0;
}