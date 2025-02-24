#include<stdio.h>
int maim()
{
	char ar[100];
	float a,b,c,d;
	scanf("%s",ar);
	scanf("%.2f%.2f",&a,&b);
	c=b*15/100;
	d=a+c;
	printf("TOTAL = %.2f",d);
	return 0;
}
