#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{

    int a,b,c,x,y,arr[8][8],i,j,sum=0;
    char ch;

    for(a=0;a<8;a++)
    {
        for(b=0;b<8;b++)
        {
            scanf("%c",&ch);
            if(ch=='w')
            arr[a][b]=1;
            else
            {
             arr[a][b]=2;
            }

        }
        scanf("%c",&ch);
    }
    //printf("%d",sum/16);

    /*for(a=0;a<8;a++)
    {
        for(b=0;b<8;b++)
        {
            printf("%d",arr[a][b]);
        }
        printf("\n\n");
    }*/

    for(a=0;a<8;a++)
    {

        for(b=0;b<8;b++)
        {
              x=0;
              y=0;
            if(arr[a][b]==2)
            {
                for(c=0;c<8;c++)
                {
                 if(arr[a][b+c]==2)
                    x++;
                }
                printf("\n%d\n",x);
                if(x==8)
                {
                    sum+=1;
                    x=0;
                }
            }


            if(arr[b][a]==2)
            {
                for(c=0;c<8;c++)
                {
                 if(arr[b+c][a]==2)
                    y++;
                }
                if(y==8)
                {
                    sum+=1;
                    y=0;
                }
            }
        }

    }
    printf("%d",sum);

    return 0;

}
