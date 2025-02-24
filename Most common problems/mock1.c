#include<stdio.h>
int main()
{
	long long a,b,c,d;
	scanf("%lld",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%lld",&c);
		for(d=0;d<=c;d++)
		{
			printf("%lld ",d);
		}
	}
	return 0;
}
