#include<stdio.h> 
main()
 { long int T,N,i,j,A,B,C,max;
  scanf("%ld",&T); i=1; 
  while(i<=T) 
  { max=0;
   C=0; 
   scanf("%ld",&N); 
   for(j=0;j<N-1;j++) 
   { scanf("%ld %ld",&A,&B);
    C+=(A-B);
	 if(C>max) max=C; else continue;
	  } 
	  printf("Case %ld: %ld\n",i,max);
	   i++; 
	   }
	    return 0; 
		}
