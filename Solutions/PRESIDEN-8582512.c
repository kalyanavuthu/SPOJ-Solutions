/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
main()
{
    int t,c,v,a[100][100],count[101],round,max1,max2,c1,c2,ans,i,j,k;
    scanf("%d",&t);
    while(t--)
    {   max1=0;max2=0;round=0;
        scanf("%d%d",&c,&v);
        for(i=0;i<=100;i++)
        {
            count[i]=0;
        }
        for(i=0;i<v;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
                if(j==0)
                {
                    count[a[i][j]]++;
                }
            }
        }
        for(k=0;k<=c;k++)
        {
            if(count[k]>max1)
            {
                max1=count[k];
                c1=k;
            }
        }
        for(k=0;k<=c;k++)
        {
            if((count[k]>max2)&&(k!=c1))
            {
                max2=count[k];c2=k;
            }
        }
        if(max1>v/2)
        {
            ans=c1;
            round=1;
        }
        if(max1<=v/2)
        {
            max1=0;round=2;
            max2=0;
            for(i=0;i<v;i++)
            {
            for(j=0;j<c;j++)
            {
                if((a[i][j]==c1)||(a[i][j]==c2))
                {
                   if(a[i][j]==c1)
                   {
                       max1++;break;
                   }
                   if(a[i][j]==c2)
                   {
                       max2++;break;
                   }
                }
            }

            }
           if(max1>max2)
            {
                ans=c1;
            }
            if(max1<max2)
            {
                ans=c2;
            }
            }
            printf("%d %d\n",ans,round);
    }

}

