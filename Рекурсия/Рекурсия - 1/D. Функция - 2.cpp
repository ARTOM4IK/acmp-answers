#include<iostream>

int f(int a, int b, int c)
{
	static int ff[21][21][21]{ 0 };
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}
	if (a > 20 || b > 20 || c > 20)
	{
		return f(20, 20, 20);
	}
	if (ff[a][b][c] == 0)
	{
		if (a < b && b < c)
		{
			ff[a][b][c] = f(a, b, c - 1) + f(a, b - 1, c - 1) + f(a, b - 1, c);
		}
		ff[a][b][c] = f(a - 1, b, c) + f(a - 1, b - 1, c) + f(a - 1, b, c - 1) - f(a - 1, b - 1, c - 1);
	}
	return ff[a][b][c];
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;
	std::cout << f(a, b, c);
	return 0;
}