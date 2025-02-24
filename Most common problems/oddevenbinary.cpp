


#include<stdio.h>


int main(){

    long int b,x, decimalNumber,remainder,quotient;

   long int c, binaryNumber[100],i=1,j;
    scanf("%ld",&x);
    for(b=1;b<=x;b++)
    {
	


   c=0;

    scanf("%ld",&decimalNumber);


    quotient = decimalNumber;


    while(quotient!=0){

         binaryNumber[i++]= quotient % 2;

         quotient = quotient / 2;
         if(binaryNumber[i-1]!=0)
         {
         	c++;
		 }

    }
    //printf("%d\n",c);
    if(c%2==0)
    {
    	printf("Case %ld: even\n",b);
	}
	else
	{
		printf("Case %ld: odd\n",b);
	}


  

  //  for(j = i -1 ;j> 0;j--)

      //   printf("%d",binaryNumber[j]);

}
    return 0;

}
