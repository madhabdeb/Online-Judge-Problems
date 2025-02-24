#include<stdio.h>
int main()
{
	int dec,i,a,b,c,d,ar[1000];
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		  scanf("%d",&dec); 
      while(dec>0)
	  {
	   
      { 
           ar[i]=dec%2; 
           i++; 
           dec=dec/2;
      }
      d=0;
      for(c=i-1;c>=0;c--)
      {
      	if(ar[c]!=0)
      	{
      		d++;
		  }
		  
	  }
	  printf("%d",d);
}
}
}
      
      
	
