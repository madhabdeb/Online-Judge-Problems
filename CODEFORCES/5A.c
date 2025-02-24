#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{

    int a,b,c,d,m,e,n,x=0,sum=0,q,p,z,y,arr[100][100];
    char ch1[100],ch2[100][30],ch;

    for(a=0;a<7;a++)
    {
        gets(ch1);
        strcpy(ch2[a],ch1);
    }
   /* for(a=0;a<7;a++)
    {
        puts(ch2[a]);
    }*/
  sum=0;
  p=0;
  x=1;
    for(a=0;a<7;a++)
    {
        if(ch2[a][0]=='+'||ch2[a][0]=='-')
            continue;
        else
        {
            n=strlen(ch2[a]);
            --n;
            while(ch2[a][n]!=':')
            {
                p++;
                n--;
            }
            sum=p+sum;
            p=0;
        }
    }
    printf("\n%d",sum);
    return 0;

}
