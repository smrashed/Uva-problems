#include <bits/stdc++.h>
using namespace std;

main()
{
	std::map<string, int> mp;
	int tc, i, cnt;
	string s;
	scanf("%d\n", &tc);
	for (i = 1 ; i <= tc ; i++)
	{
		cnt = 0;
		while (1)
		{
			getline(cin, s);
			if (s.size() == 0)
			{
				break;
			}
			mp[s]++;
			++cnt;
		}
		std::map<string, int> ::iterator IT;
		for (IT = mp.begin() ; IT != mp.end() ; IT++ )
		{
			int a = IT->second;
			double b = (double)(((double)a / (double)cnt) * 100.00);
			cout << IT->first << " ";
			printf("%.4lf\n", b );
		}
		if (i != tc)
		{
			printf("\n");
		}
		mp.clear();
	}
}