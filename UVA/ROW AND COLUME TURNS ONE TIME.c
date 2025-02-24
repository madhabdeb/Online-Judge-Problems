#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){

    int a,b,c,d,m,e,x=0,y=0,p,arr[100][100];
    char ch1[100],ch2[100],ch='9';

    scanf("%d",&m);
    for(a=0;a<m;a++)
    {
        for(b=0;b<m;b++)
        {
        scanf("%d",&arr[a][b]);
        }
    }
  /*  for(a=0;a<m;a++)
    {
        for(b=0;b<m;b++)
        {
        printf("%d ",arr[a][b]);
        }
        printf("\n");
    }*/

  p=0;
  x=0;y=0;
   for(a=0;a<m-1;a++)
   {
        for(b=0;b<m-1;b++)
        {
                for(c=0;c<3;c++)
                {
                   x+=arr[a][c+b]+arr[a+1][c+b];
                   y+=arr[c+b][a]+arr[c+b][a+1];

                }
           printf("\nx=%d y=%d\n",x,y);

          e=x>=y?x:y;
          if(e>p)
          {
              p=e;
          }
          x=0;y=0;
        }
   }
  printf("%d",p);







}
