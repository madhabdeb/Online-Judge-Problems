#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){

    int a,b,c,d,m,n1,n2,e,x=0,y=0,n,l,p,cr,num,i;
    char c1,c2,ch,cp[8][3];

    scanf("%c%d%c%c%d",&c1,&n1,&ch,&c2,&n2);

    cr=c2-c1;
    if(cr<0)
    {
        c=-1;
    }
    else
    {
        c=cr==0?1:cr;
        cr=1;
    }
    num=n2-n1;
     if(num<0)
    {
        n=-1;
    }
    else
    {
        n=num==0?n1:num;
        num=1;    ///////
    }
    //printf("%d %d\n\n",cr,num);
   // printf("%d %d\n\n",c,n);


     for( ;cr<=c;cr++)
    {
        if(cr!=c && num!=n)
        {

            if(cr>0&&num>0)
            {
              strcpy(cp[x++],"RU");
            }
             else if(cr>0&&num<0)
            {
              strcpy(cp[x++],"RD");
            }
             else if(cr<0&&num>0)
            {
              strcpy(cp[x++],"LU");
            }
             else if(cr<0&&num<0)
            {
              strcpy(cp[x++],"LD");
            }

            num++;
            l=0;
            continue;
        }

        //////all are equel//

        if(cr==c)
        {
            if(i==2&& num==n)
            {
                if(cr>0&&num==n)
                {
                strcpy(cp[x++],"R");
                }
                else if(cr<0&&num==n)
                {
                strcpy(cp[x++],"L");
                }
            }
            else if(l==0)
            {
                if(cr>0&&num>0)
                {
                  strcpy(cp[x++],"RU");
                }
                 else if(cr>0&&num<0)
                {
                  strcpy(cp[x++],"RD");
                }
                 else if(cr<0&&num>0)
                {
                  strcpy(cp[x++],"LU");
                }
                 else if(cr<0&&num<0)
                {
                  strcpy(cp[x++],"LD");
                }
            }
        }

        ///////////new line//////


         if(cr==c && num!=n)
        {
            d=l==0?-1:0;
             for( ;num<=(n+d);num++)
            {
                if(num>0)
                {
                  strcpy(cp[x++],"U");
                }
                 else if(num<0)
                {
                  strcpy(cp[x++],"D");
                }
            }
        }


        //////////////////////////////////////////////////////////////////////////
        else if(cr!=c && num==n)
        {
            if(l==0)
            {
                 if(num>0)
                {
                  strcpy(cp[x++],"RU");
                }
                 else if(num<0)
                {
                  strcpy(cp[x++],"LD");
                }
            }
            d=l==0?0:1;
           for( ; cr!=(c+d);cr++)
           {
               if(cr>0&&num==n)
                {
                strcpy(cp[x++],"R");
                }
                else if(cr<0&&num==n)
                {
                strcpy(cp[x++],"L");
                }
           }
        }
    }

        printf("%d\n",x);
        for(y=0;y<x;y++)
        puts(cp[y]);

return 0;
}
