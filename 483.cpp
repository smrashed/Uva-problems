//*****************S.M.Rashedul Islam***************//
//******Dept.of Computer Science & Engineering******//
//************Islamic University,Kushtia************//

#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,j,sum,whitespace;
    string s,ss;
    char ch[101];
    while(getline(cin,s))
    {
        sum=0;
        whitespace=0;
        for(i=0; i<s.size();)
        {
            if(s[i]!=' ')
            {
                j=-1;
                while(s[i]!=' ' && i<s.size())
                {
                    ch[++j]=s[i++];
                }
                ch[j+1]='\0';
                ss=string(ch);
                reverse(ss.begin(),ss.end());
                sum+=ss.size();
                if(sum==s.size()-whitespace)
                {
                    cout<<ss;
                }
                else
                    cout<<ss<<" ";
            }
            else
            {
                i++;
                ++whitespace;
            }
        }
        cout<<endl;
    }
}
