#include<iostream>

int f(std::string a, int i1)
{
	static int i = i1;
	int res = 0;

	if (a[i] >= '0' && a[i] <= '9')
		return a[i] - '0';

	else if (a[i] == 'M')
	{
		res = std::max(f(a, i += 2), f(a, i += 2));
		i += 1;
		return res;

	}
	else if (a[i] == 'm')
	{
		res = std::min(f(a, i += 2), f(a, i += 2));
		i += 1;
		return res;
	}

	return 1;
}

int main(int argc, char* argv[])
{
	std::string a;
	std::cin >> a;

	std::cout << f(a, 0);

	return 0;
}