//*****************S.M.Rashedul Islam***************//
//******Dept.of Computer Science & Engineering******//
//************Islamic University,Kushtia************//

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
    char s[101],s2[101];
    int i,j;
    while(gets(s))
    {
        j=-1;
        for(i=0; i<strl(s); i++)
        {

            if(s[i]=='A' || s[i]=='B' || s[i]=='C' )
            {
                s2[++j]='2';
            }
            else if(s[i]=='D' || s[i]=='E' || s[i]=='F' )
            {
                s2[++j]='3';
            }
            else if(s[i]=='G' || s[i]=='H' || s[i]=='I' )
            {
                s2[++j]='4';
            }
            else if(s[i]=='J' || s[i]=='K' || s[i]=='L' )
            {
                s2[++j]='5';
            }
            else if(s[i]=='M' || s[i]=='N' || s[i]=='O' )
            {
                s2[++j]='6';
            }
            else if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
            {
                s2[++j]='7';
            }
            else if(s[i]=='T' || s[i]=='U' || s[i]=='V')
            {
                s2[++j]='8';
            }
            else if(s[i]=='W' || s[i]=='X'  || s[i]=='Y'  || s[i]=='Z')
            {
                s2[++j]='9';
            }
            else
                s2[++j]=s[i];
        }
        s2[j+1]='\0';
        printf("%s\n",s2);
    }
}
