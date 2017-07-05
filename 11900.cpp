#include <bits/stdc++.h>
using namespace std;

int main()
{
	int caseno, sum, cnt, n, p, q, aray[35];
	scanf("%d", &caseno);
	for (int i = 1; i <= caseno; i++)
	{
		scanf("%d %d %d", &n, &p, &q);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &aray[j]);
		}
		sum = 0;
		cnt = 0;
		for (int j = 0; j < n; j++)
		{
			sum += aray[j];
			if (sum <= q && cnt + 1 <= p)
			{
				cnt++;
			}
			else
			{
				break;
			}
		}
		printf("Case %d: %d\n", i, cnt);
	}
	return 0;
}