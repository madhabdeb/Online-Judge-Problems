#include<stdio.h>
int main()
{
	char ar[100];
	double a,b,c,d;
	scanf("%s",ar);
	scanf("%.2f%.2f",&a,&b);
	c=b*15/100;
	d=a+c;
	printf("TOTAL = %.2f",d);
	return 0;
}
