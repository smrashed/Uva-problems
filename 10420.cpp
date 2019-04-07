#include<bits/stdc++.h>
using namespace std;

main()
{
    map<string,int>mp;
    int csno,i,j,k;
    string ch,ch2;
    scanf("%d",&csno);
    for(i=1;i<=csno;i++)
    {
        cin>>ch;
        mp[ch]++;
        getline(cin,ch2);
    }
    map<string,int>::iterator x;
    for(x=mp.begin();x!=mp.end();x++)
    {
        cout<<x->first<<" "<<x->second<<endl;
    }
}
