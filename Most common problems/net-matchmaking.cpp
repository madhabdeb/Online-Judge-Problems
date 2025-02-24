#include<stdio.h>
int main()
{
    int B,S,count=0,ara[10000],i,j,temp,a,arr[10000];
    while(scanf("%d %d",&B,&S)==2)
    {
        if(B==0&&S==0)
        {
            break;
        }
        else if(B<=S)
        {
            count++;
            for(i=0; i<B; i++)
            {
                scanf("%d",&ara[i]);
            }
            for(j=0; j<S; j++)
            {
                scanf("%d",&arr[j]);
            }
            printf("Case %d: 0\n",count);
        }
        else
        {
            count++;
            a=B-S;
            for(i=0; i<B; i++)
            {
                scanf("%d",&ara[i]);
            }
            for(j=0; j<S; j++)
            {
                scanf("%d",&arr[j]);
            }
            for(j=0; j<B-1; j++)
            {
                for(i=0; i<B; i++)
                {
                    if(ara[i]>ara[i+1])
                    {
                        temp=ara[i];
                        ara[i]=ara[i+1];
                        ara[i+1]=temp;

                    }
                }
            }
            printf("Case %d: %d %d\n",count,a,ara[0]);
        }
    }
    return 0;
}
