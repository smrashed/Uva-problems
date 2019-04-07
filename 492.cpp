#include<bits/stdc++.h>
using namespace std;

bool isvowel(char ch)
{
	if (ch == 'A' || ch == 'E' || ch == 'I' \
	        || ch == 'O' || ch == 'U' || ch == 'a' \
	        || ch == 'e' || ch == 'i' || ch == 'o' \
	        || ch == 'u')
	{
		return true;
	}
	return false;
}

void wordprocess(char x[], char y[])
{
	int i, k = -1;
	if (!isvowel(x[0]))
	{
		for (i = 1; i < strlen(x); i++)
		{
			y[++k] = x[i];
		}
		y[++k] = x[0];
		y[++k] = 'a';
		y[++k] = 'y';
		y[++k] = '\0';
	}
	else
	{
		for (i = 0; i < strlen(x); i++)
		{
			y[++k] = x[i];
		}
		y[++k] = 'a';
		y[++k] = 'y';
		y[++k] = '\0';
	}
}

void abc(char ch[])
{
	char ch2[1000000], ch3[1000000];
	int i, k;
	for (i = 0; i < strlen(ch);)
	{
		if (isalpha(ch[i]) && i < strlen(ch))
		{
			k = -1;
			while (isalpha(ch[i]) && i < strlen(ch))
			{
				ch2[++k] = ch[i];
				i++;
			}
			ch2[++k] = '\0';
			wordprocess(ch2, ch3);
			printf("%s", ch3);
		}
		else
		{
			printf("%c", ch[i]);
			i++;
		}
	}
	printf("\n");
}
main()
{
	char ch, ch2[1000000];
	int i = 0, j, k;
	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
		{
			ch2[i++] = ch;
		}
		else
		{
			ch2[i] = '\0';
			abc(ch2);
			i = 0;
		}
	}
}
