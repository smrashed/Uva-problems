//I seek protection in ALLAH, from the accursed Satan
//In the name of ALLAH, the Benificent, the Merciful
/*
Author:
S.M. Rashedul Islam
Dept.of Computer Science & Engineering
Islamic University,Kushtia
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        while(1)
        {
            stack<int>station;
            vector<int>track1;
            int i,value,mark=0,save,j;
            for(i=0; i<n; i++)
            {
                cin>>value;
                if(value==0)
                {
                    mark=1;
                    cout<<endl;
                    break;
                }
                else
                    track1.push_back(value);
            }
            int s=track1.size();
            if(mark==1)
                break;
            else
            {
                j=0;
                for(i=0; i<s; i++)
                {
                    station.push(i+1);
                    while(station.size()!=0 && track1[j]==station.top())
                    {
                        station.pop();
                        j++;
                    }
                }
                if(station.size()==0)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
        }
    }
}
