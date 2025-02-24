#include<stdio.h>
int main()
{ 
      int a[20]; 
      int e,dec,i=0;
     
      scanf("%d",&dec); 
      while(dec>0)
	  {
	   
      { 
           a[i]=dec%2; 
           i++; 
           dec=dec/2;
      }
      e=0;

      for(int j=i-1;j>=0;j--) 
      {
        if(a[j]!=0)
       {
	   printf("%d\n",a[j]);
	   e++;
	   
    }
      }
	  printf("%d",e);
      
  }
  
      
 }
	

