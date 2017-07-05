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
    int tstno,i,j,k,p,sum;
    char ch[1001],a;
    scanf("%d ",&tstno);
    for(i=1; i<=tstno; i++)
    {
        gets(ch);
        printf("Case %d: ",i);
        for(j=0; j<strl(ch);)
        {
            if(ch[j]>='1'  && ch[j]<='9' && j<strl(ch))
            {
                a=ch[j-1];
                sum=0;
                while(ch[j]>='0'  && ch[j]<='9' && j<strl(ch))
                {
                    p=ch[j];
                    p=p-48;
                    sum=sum*10+p;
                    j++;
                }
                for(k=0; k<sum; k++)
                {
                    printf("%c",a);
                }
            }
            else
                j++;
        }
        printf("\n");
    }
}
