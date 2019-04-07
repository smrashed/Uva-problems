#include<bits/stdc++.h>
using namespace std;

main()
{
    map<char,int>mp;
    char convert,container;
    char ch[101];
    int i,j,k,l,s,check;
    for(i=65; i<=90; i++)
    {
        if(i==65 || i==69 || i==72 || i==73 \
                || i==79 || i==85 || i==87 || i==89)
        {
            convert=i;
            mp[convert]=0;
        }
        else if(i==66 || i==80 || i==70 || i==86)
        {
            convert=i;
            mp[convert]=1;

        }
        else if(i==67 || i==83 || i==75 ||i==71 \
                || i==74 || i==81 || i==88 || i==90)
        {
            convert=i;
            mp[convert]=2;
        }
        else if(i==68 || i==84)
        {
            convert=i;
            mp[convert]=3;
        }
        else if(i==76)
        {
            convert=i;
            mp[convert]=4;
        }
        else if(i==77 || i==78)
        {
            convert=i;
            mp[convert]=5;
        }
        else if(i==82)
        {
            convert=i;
            mp[convert]=6;
        }
    }
    printf("         NAME                     SOUNDEX CODE\n");
    while(scanf("%s",ch)!=EOF)
    {
        printf("         ");
        printf("%s",ch);
        int ara[101]= {0},ara2[101]= {0},ara3[101]= {0};
        l=strlen(ch);
        container=ch[0];
        k=-1;
        s=-1;
        for(i=0; i<l; i++)
        {
            ara[i]=mp[ch[i]];
        }
        for(j=0; j<l-1; j++)
        {
            if(ara[j]!=ara[j+1])
            {
                ara2[++k]=ara[j+1];
            }
        }
        for(j=0; j<=k; j++)
        {
            if(ara2[j]!=0)
            {
                ara3[++s]=ara2[j];
                if(s==2)
                    break;
            }
        }
        for(i=l+10; i<=34; i++)
        {
            printf(" ");
        }
        printf("%c",container);
        if(s==-1)
        {
            printf("000");
        }
        else if(s<2)
        {
            check=s;
            for(i=check+1; i<=2; ++i)
            {
                ara3[i]=0;
            }
            for(j=0; j<=2; j++)
                cout<<ara3[j];
        }
        else
        {
            for(i=0; i<=s; i++)
            {
                cout<<ara3[i];
            }
        }
        cout<<endl;
    }
    printf("                   END OF OUTPUT\n");
}
