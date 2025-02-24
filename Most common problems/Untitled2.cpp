#include<stdio.h>
int main()
{
	long long a,b,c,d;
	scanf("%lld",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%lld%lld",&c,&d);
		if(c<d)
		{
			printf("<\n");
		}
		else if(c>d)
		{
			printf(">\n");
		}
		else
	{
			printf("=\n");
		}
	}
	return 0;
}

