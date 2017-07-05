#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<map>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;

int rounding( double x)
{
    int a,k,r;
    a=(int)(x*10.0);
    k=a;
    r=k%10;
    if(r<5)
        return floor(x);
    else
        return ceil(x);
}

main()
{
    string s;
    map<string,int>mp;
    int i,j,k,cnt,cnt2,catc;
    double sum,entropy,maximum_entropy,relative_entropy;
    char ch[101];
    while(1)
    {
        getline(cin,s);
        cnt=0;
        sum=0.0;
        cnt2=0;
        if(s=="****END_OF_INPUT****")
            break;
        else if(s=="****END_OF_TEXT****")
            continue;
        else if(s!="****END_OF_TEXT****")
        {
            while(s!="****END_OF_TEXT****")
            {
                cnt2=0;
                for(i=0; i<s.size();)
                {
                    j=-1;
                    if(s[i]!=',' && s[i]!='.' && s[i]!=':' && s[i]!=';' && s[i]!='!' && s[i]!='?' \
                    && s[i]!='"' && s[i]!='(' && s[i]!=')' && s[i]!=' ' && s[i]!='\n' )
                    {
                        while(s[i]!=',' && s[i]!='.' && s[i]!=':' && s[i]!=';' && s[i]!='!' && s[i]!='?' \
                        && s[i]!='"' && s[i]!='(' && s[i]!=')' && s[i]!=' ' && s[i]!='\n' && i<s.size())
                        {
                            ch[++j]=s[i++];
                        }
                        ch[j+1]='\0';
                        string s2=string(ch);
                        transform(s2.begin(),s2.end(),s2.begin(),::tolower);
                        mp[s2]++;
                        ++cnt2;
                    }
                    else
                        i++;
                }
                cnt+=cnt2;
                getline(cin,s);
            }
            cout<<cnt<<" ";
        }
        map<string,int>::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            k=it->second;
            sum+=(double)k*(log10((double)cnt)-log10((double)k));
            //cout<<it->first<<" "<<it->second<<endl;
        }
        //cout<<sum<<" ";
        entropy=sum/(double)cnt;
        printf("%.1lf ",entropy);
        maximum_entropy=log10((double)cnt);
        relative_entropy=(entropy/maximum_entropy)*100.00;
        catc=rounding(relative_entropy);
        cout<<catc<<endl;
        mp.clear();
    }
}
