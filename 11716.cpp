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
    int tstno,i,j,k,l,catc,a,b,m;
    char ch[10001],s[10001],s2[10001];
    scanf("%d ",&tstno);
    for(i=1; i<=tstno; i++)
    {
        gets(ch);
        catc=strl(ch);
        //printf("%d\n",catc);
        a=sqrt(catc);
        b=a*a;
        if(catc!=b)
            printf("INVALID\n");
        else
        {
            l=-1;
            for(m=0; m<a; m++)
            {
                for(j=0; j<catc;)
                {
                    k=-1;
                    while(++k<a && j<catc)
                    {
                        s[k]=ch[j++];
                        //cout<<ch[j]<<" ";
                    }
                    s[k]='\0';
                    s2[++l]=s[m];
                    //s2[l]+=s[0];
                    //printf("%s\n",s);
                }
                s2[l+1]='\0';
            }
            printf("%s\n",s2);
        }
    }
}
