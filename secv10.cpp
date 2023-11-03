#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("numere.in");
int main()
{
	int n, lgmax, i, x, lg;
	fin >> n;
	for (lg = lgmax = i = 0; i < n; i++)
	{
		fin >> x;
		if (x % 10)
		{
			if (lg > lgmax)
			{
				lgmax = lg;
			}
			lg = 0;
		}
		else
		{
			lg++;
		}
	}
	fin.close();
	if (lg > lgmax)
	{
		lgmax = lg;
	}
	cout << lgmax;
	return 0;
}
