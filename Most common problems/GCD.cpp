#include<stdio.h>
int main()
{
int a,b,c,d;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%d%d",&c,&d);
		if(d%c==0)
		{
			printf("%d %d\n",c,d);
		}
		else printf("-1\n");
	}return 0;
}
