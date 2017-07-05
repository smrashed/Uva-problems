#include<bits/stdc++.h>
using namespace std;

main()
{
    map<string,int>mp;
    int i,j,k,l,m,cnt=1;
    string s1,str="abcdefghijklmnopqrstuvwxyz";
    string str2;
    for(i=0; i<str.size(); i++)
    {
        s1=str[i];
        mp[s1]=cnt;
        cnt++;
    }
    //cout<<mp.size()<<endl;
    for(i=0; i<str.size(); i++)
    {
        for(j=i+1; j<str.size(); j++)
        {
            string s2;
            s2+=str[i];
            s2+=str[j];
            //cout<<s2<<endl;
            mp[s2]=cnt;
            cnt++;
        }
    }

    for(i=0; i<str.size(); i++)
    {
        for(j=i+1; j<str.size(); j++)
        {
            for(k=j+1; k<str.size(); k++)
            {
                string s3;
                s3+=str[i];
                s3+=str[j];
                s3+=str[k];
                mp[s3]=cnt;
                cnt++;
            }
        }
    }
    for(i=0; i<str.size(); i++)
    {
        for(j=i+1; j<str.size(); j++)
        {
            for(k=j+1; k<str.size(); k++)
            {
                for(l=k+1; l<str.size(); l++)
                {
                    string s4;
                    s4+=str[i];
                    s4+=str[j];
                    s4+=str[k];
                    s4+=str[l];
                    mp[s4]=cnt;
                    cnt++;
                }
            }
        }
    }
    for(i=0; i<str.size(); i++)
    {
        for(j=i+1; j<str.size(); j++)
        {
            for(k=j+1; k<str.size(); k++)
            {
                for(l=k+1; l<str.size(); l++)
                {
                    for(m=l+1; m<str.size(); m++)
                    {
                        string s5;
                        s5+=str[i];
                        s5+=str[j];
                        s5+=str[k];
                        s5+=str[l];
                        s5+=str[m];
                        mp[s5]=cnt;
                        cnt++;
                    }
                }
            }
        }
    }
    //cout<<mp.size()<<endl;
    while(cin>>str2)
    {
        cout<<mp[str2]<<endl;
    }
}
