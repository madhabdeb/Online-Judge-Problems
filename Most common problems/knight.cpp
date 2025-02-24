#include<stdio.h>
int main()
{
	int a,b,c,d,g,e;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%d %d",&c,&d);
		g=c*d;
		if(g%2==0)
		{
		e=g/2;
		printf("Case %d: %d\n",b,e);
		}
		else if(g%2!=0)
		{
		e=g/2+1;
		printf("Case %d: %d\n",b,e);
		
	}
	}
	return 0;
}
