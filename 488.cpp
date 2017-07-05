#include<bits/stdc++.h>
using namespace std;

main()
{
    int csno,amplitude,frequency;
    int i,j,k,l,m;
    scanf("%d",&csno);
    for(i=1; i<=csno; i++)
    {
        scanf("%d %d",&amplitude,&frequency);
        for(m=1; m<=frequency; m++)
        {
            for(j=1; j<=amplitude; j++)
            {
                for(k=1; k<=j; k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            for(k=j-2; k>=1; k--)
            {
                for(l=1; l<=k; l++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            if(m!=frequency)
            {
                printf("\n");
            }
        }
        if(i!=csno)
        {
            printf("\n");
        }
    }
}
