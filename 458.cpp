#include<bits/stdc++.h>
using namespace std;

int strl(char ch[])
{
    int i,cnt=0;
    for(i=0; ch[i]!='\0'; i++)
    {
        ++cnt;
    }
    return cnt;
}

main()
{
    char s[1001],s2[1001];
    int i;
    while(gets(s))
    {
        for(i=0; i<strl(s); i++)
        {
            s2[i]=s[i]-7;
        }
        s2[i]='\0';
        printf("%s\n",s2);
    }
}
