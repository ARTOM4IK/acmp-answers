#include<iostream>
#include<string>

using namespace std;

void output(string& str, int index = 0)
{
	static int count = str.length();
	static bool used[8];
	static string current = str;
	if (index == count)
	{
		cout << current << endl;
		return;
	}
	for (int i = 0; i < count; ++i)
	{
		if (used[i])
		{
			continue;
		}
		used[i] = true;
		current[index] = str[i];
		output(str, index + 1);
		used[i] = false;
	}
}

int main()
{
	string str;
	cin >> str;
	output(str);
	return 0;
}

