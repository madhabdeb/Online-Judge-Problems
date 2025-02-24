#include<stdio.h>
int main()
{
    int a,b,c,amount;
        a=b=c=0;
        printf("enter the amount=");
        scanf("%d",&amount);

        while(amount>=10)
        {
            if(amount>=100)
            {
                a=amount/100;
                amount=amount%100;
            }
            else
            {
                if(amount>=50)
                {
                  b=amount/50;
                  amount=amount-50;
                }
                else
                {
                  c=amount/10;
                  amount=amount%10;
                }
            }
        }
        if(a!=0)
        {
         printf("HUNDRED TADKA NOTES=%d\t",a);
        }
         if(b!=0)
        {
         printf("FIFTY TAKA NOTES=%d\t",b);
        }
         if(c!=0)
        {
         printf("TEN TAKA NOTES=%d",c);
        }



}
