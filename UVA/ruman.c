#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,t,i,j,m;

    scanf("%d",&m);

    if(m>=1000)
    {
      c=m/1000;
      m=m%1000;
      for(a=1;a<=c;a++)
      {
      printf("M");
      }
    }
    if(m>=500)
    {
      c=m/500;
      m=m%500;
      for(a=1;a<=c;a++)
      {
      printf("D");
      }

    }
     if(m>=100)
    {
      c=m/100;
      m=m%100;
      for(a=1;a<=c;a++)
      {
      printf("C");
      }

    }
      if(m>=50)
    {
      c=m/50;
      m=m%50;
      for(a=1;a<=c;a++)
      {
      printf("L");
      }

    }
      if(m>=10)
    {
      c=m/10;
      m=m%10;
      for(a=1;a<=c;a++)
      {
      printf("X");
      }

    }
       if(m==5)
    {
      c=m/5;
      m=m%5;
      for(a=1;a<=c;a++)
      {
      printf("v");
      }

    }
    switch(m)
    {
    case 1:
        printf("I");
        break;
    case 2:
        printf("II");
          break;
     case 3:
        printf("III");
          break;
     case 4:
        printf("IV");
          break;
     case 6:
        printf("VI");
          break;
     case 7:
        printf("VII");
          break;
     case 8:
        printf("VIII");
          break;
     case 9:
        printf("IX");
          break;
     default:
        ;
    }




}
