///..........................S.M.RASHEDUL ISLAM.........................///
///.................DEPT.OF COMPUTER SCIENCE & ENGINEERING..............///
///.......................ISLAMIC UNIVERSITY,KUSHTIA....................///
#include<bits/stdc++.h>
using namespace std;

main()
{
    map<string,int>mp;//map<key,value>map_name
    int csno,i,j,k;
    string ch,ch2;
    scanf("%d",&csno);
    for(i=1;i<=csno;i++)
    {
        cin>>ch;
        mp[ch]++;//store string and increase it's storing times value such as 0+1+2....
        getline(cin,ch2);
    }
    map<string,int>::iterator x;
    for(x=mp.begin();x!=mp.end();x++)
    {
        cout<<x->first<<" "<<x->second<<endl;
    }
}
