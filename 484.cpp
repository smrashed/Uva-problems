#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::map<int, int> mp;
	std::vector<int> v;
	int a, i;
	while (cin >> a)
	{
		int flag = 0;
		mp[a]++;
		for (i = 0; i < v.size(); i++)
		{
			if (a == v[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			v.push_back(a);
		}
	}
	for (i = 0; i < v.size(); i++)
	{
		cout << v[i] << " " << mp[v[i]] << endl;
	}
	return 0;
}
