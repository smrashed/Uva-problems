#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::map<string, string> map1;
	long long i, k, j, n;
	string s, s3;
	char a[100], b[100];
	while (1)
	{
		getline(cin, s);
		if (s.size() == 0)
		{
			break;
		}
		for (i = 0;; i++)
		{
			a[i] = s[i];
			if (s[i] == ' ')
			{
				k = i;
				break;
			}
		}
		a[k] = '\0';
		string st = string(a);
		n = -1;
		for (j = k + 1; j < s.size(); j++)
		{
			b[++n] = s[j];

		}
		b[n + 1] = '\0';
		string str = string(b);
		map1[str] = st;
	}
	while (cin >> s3)
	{
		if (map1[s3].size() == 0) /*if (map1[s3] == "")*/
		{
			cout << "eh" << endl;
		}
		else
		{
			cout << map1[s3] << endl;
		}
	}
	return 0;
}