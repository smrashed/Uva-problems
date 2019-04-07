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
    int i;
    char s[101],s2[101];
    gets(s);
    for(i=0; i<strl(s); i++)
    {
        if(s[i]=='D' || s[i]=='d') s2[i]='a';          
        else if(s[i]=='F' || s[i]=='f') s2[i]='s';
        else if(s[i]=='G' || s[i]=='g') s2[i]='d';
        else if(s[i]=='H' || s[i]=='h') s2[i]='f';
        else if(s[i]=='J' || s[i]=='j') s2[i]='g';
        else if(s[i]=='K' || s[i]=='k') s2[i]='h';
        else if(s[i]=='L' || s[i]=='l') s2[i]='j';
        else if(s[i]==':' || s[i]==';') s2[i]='k';
        else if(s[i]=='"' || s[i]=='\'') s2[i]='l';
        else if(s[i]=='C' || s[i]=='c') s2[i]='z';
        else if(s[i]=='V' || s[i]=='v') s2[i]='x';
        else if(s[i]=='B' || s[i]=='b') s2[i]='c';
        else if(s[i]=='N' || s[i]=='n') s2[i]='v';
        else if(s[i]=='M' || s[i]=='m') s2[i]='b';
        else if(s[i]==',' || s[i]=='<') s2[i]='n';
        else if(s[i]=='.' || s[i]=='>') s2[i]='m';
        else if(s[i]==']' || s[i]=='}') s2[i]='p';
        else if(s[i]=='[' || s[i]=='{') s2[i]='o';
        else if(s[i]=='P' || s[i]=='p') s2[i]='i';
        else if(s[i]=='O' || s[i]=='o') s2[i]='u';
        else if(s[i]=='I' || s[i]=='i') s2[i]='y';
        else if(s[i]=='U' || s[i]=='u') s2[i]='t';
        else if(s[i]=='Y' || s[i]=='y') s2[i]='r';
        else if(s[i]=='T' || s[i]=='t') s2[i]='e';
        else if(s[i]=='R' || s[i]=='r') s2[i]='w';
        else if(s[i]=='E' || s[i]=='e') s2[i]='q';
        else if(s[i]==' ') s2[i]=s[i];
        printf("%c",s2[i]);
    }
    printf("\n");
}
