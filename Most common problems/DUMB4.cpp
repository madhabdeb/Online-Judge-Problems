#include<stdio.h>
int main()
{
int cases, caseno, a, b, c, d;
scanf("%d", &cases);
for(caseno = 1; caseno <= cases; caseno++)
{
scanf("%d %d %d %d", &a, &b, &c, &d);
printf("Case %d: ", caseno);
if(a>(b+c+d) )
{
	printf("Not ok");
}

else if(b>(a+c+d))
{
	printf("Not ok");	
}
else if(c>(a+b+d))
{
	printf("Not ok");
}
else if(d>(a+b+c))
{
	printf("Not ok");
}
else {
	printf("okay");
}
}

return 0;
}
