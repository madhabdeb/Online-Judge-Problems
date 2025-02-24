#include<stdio.h>
int main()
{
	int a,b,c,d,e=0,sum,av,arr[100];
	float f;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		
		scanf("%d",&c);
		for(d=1;d<=c;d++)
		{
			scanf("%d",&arr[d]);
			sum=sum+arr[d];
			
			
		}
	//	printf("sum = %d",sum);
		av=sum/c;
	//	printf("\nav = %d",av);
	e=0;
		for(d=1;d<=c;d++)
		{
			if(arr[d]>av)
			e=e+1;
			
			
			
		}
		f=e*100;
		f=f/c;
		printf("\n%.3f%\n",f);
	}
	return 0;
}
