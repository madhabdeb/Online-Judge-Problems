#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%d%d%d",&c,&d,&e);
		if((c>=d)&&(c>=e))
		{
			printf("Case %d: %d\n",b,c);
		}
		else if((d>=c)&&(d>=e))
		{
			printf("Case %d: %d\n",b,d);
		}
		else
		{
			printf("Case %d: %d\n",b,e);
		}
	}
	return 0;
}
