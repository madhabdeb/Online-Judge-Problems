#include<stdio.h>
int man()
{
	int a,b,c,d;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%d%d",&c,&d);
		d=c+d;
		printf("Casr %d: %d\n",b,d);
		d=0;
	}
	return 0;
}
