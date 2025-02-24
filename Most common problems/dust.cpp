#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%d",&d);
		f=0;
		for(c=1;c<=d;c++)
		{
			scanf("%d",&e);
			if(e>=0)
			{
				
			
			f=f+e;
		}
		}
		printf("Case %lld: %lld\n",b,f);
	}
	return 0;

}
