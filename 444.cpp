#include<bits/stdc++.h>
using namespace std;

main()
{
    map<string,char>riad;
    int i,c,j,k,p,recieve;
    char a,s2[1001];
    string s,s3,s4,s5;
    for(i=32; i<=122; i++)
    {

        stringstream ss;
        ss<<i;
        string str=ss.str();
        a=i;
        riad[str]=a;
    }
    map<char,string>riad2;
    for(i=32; i<=122; i++)
    {
        stringstream ss;
        ss<<i;
        string str=ss.str();
        a=i;
        riad2[a]=str;
    }
    while(getline(cin,s))
    {
        if(s[0]>='0' && s[0]<='9')
        {
            k=-1;
            for(j=s.size()-1; j>=0; j--)
            {
                s2[++k]=s[j];
                if(k==1 && j>=0)
                {
                    s2[k+1]='\0';
                    s3=string(s2);
                    if(riad[s3]!='\0')
                    {
                        cout<<riad[s3];
                    }
                    else if(riad[s3]=='\0')
                    {
                        if(j>=0)
                        {
                            s2[k+1]=s[--j];
                            s2[k+2]='\0';
                            s4=string(s2);
                            cout<<riad[s4];
                        }
                    }
                    k=-1;
                }
            }
            printf("\n");
        }
        else
        {
            for(j=s.size()-1; j>=0; j--)
            {
                s5=riad2[s[j]];
                string str2(s5);
                reverse(str2.begin(), str2.end());
                cout<<str2;
            }
            printf("\n");
        }
    }
}

