#include<stdio.h>
#include<string.h>


int main(){

    int a,b,c,d,m,e,x,y,arr[1000],prio[1000],t,p;
    char cp[1000][32],ch2[32],ch;

    scanf("%d",&t);
    scanf("%c",&ch);
    for(a=0;a<t;a++)
    {
        scanf("%s",cp[a]);
        scanf("%d",& arr[a]);
        prio[a]=a+1;

    }
    m=0;
    for(a=0;a<t-m;a++)
    {
        for(b=a+1;b<t-m;b++)
        {
            if(strcmp(cp[a],cp[b])==0)
            {
                arr[a]=arr[a]+arr[b];
                prio[a]=prio[b];

                for(c=b;c<t-m-1;c++)
                {
                    strcpy(cp[c],cp[c+1]);
                    prio[c]=prio[c+1];
                    arr[c]=arr[c+1];
                }
                m++;
            }
        }
    }
    x=arr[0];
    p=prio[0];
     for(a=0;a<t-m;a++)
    {
       if(arr[a]==x && prio[a]<=p)
       {
           strcpy(ch2,cp[a]);
       }
        if(arr[a]>x)
       {
           strcpy(ch2,cp[a]);
       }
    }
    puts(ch2);

    return 0;
}
