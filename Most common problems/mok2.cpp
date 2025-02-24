

#include <stdio.h>
 
int main()
{
  int array[20000], maximum, size, c, location = 1,n,d,x,y;
 
 
  scanf("%d", &size);
 
 
 
  for (c = 1; c <= size; c++)
  {
  	scanf("%d", &n);
  	 array [d-1]=0;
  	 for (d = 0; d< n-1; d++)
  	 { 
  	 	scanf("%d%d",&x,&y);
  	 	
  	 	array[d]=x-y;
  	 	
  	 	array[d]=array[d]+array[d-1];
  	 //	printf("%d",array[d]);
  	 	
	   }
	   
	  //  for (d = 0; d< n-1; d++)
	    maximum = array[0];
 
   	 for (d = 0; d< n-1; d++)
  {
    if (array[d] > maximum)
    {
       maximum  = array[d];
       location = d+1;
    }
  }
 
  printf(" Case %d: %d\n" ,c,maximum);
	    
  }
    

  return 0;
}
