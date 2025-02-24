#include<stdio.h>
int main()
{
long long a,b,c,d,e,sum;
	scanf("%lld",&a);
	for(b=1;b<=a;b++)
	{ sum=0;
	scanf("%lld",&c);
	for(d=1;d<=c;d++)
	{
		scanf("%lld",&e);
		if(e>=0)
		{
			sum=sum+e;
		}
		}
		printf("%lld\n",sum);	
	}
	return 0;
}
