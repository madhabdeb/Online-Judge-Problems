#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b,c,d;
	double r,ar,as,df;
	scanf("%lld",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%lf",&r);
		ar=2*acos(0.0)*r*r;
		as=4*r*r;
		df=as-ar;
		printf("Case %lld: %.2lf\n",b,df);
	}
	return 0;
	
}
