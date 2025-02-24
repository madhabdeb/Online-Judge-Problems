#include<stdio.h>
#include<math.h>
 main()
{
	int a,b;
	double c,ln,ar,crar,op,pi=2 * acos (0.0);
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%lf",&c);
		ln=2*c;
		ar=ln*ln;
		crar=pi*c*c;
		op=ar-crar;
		printf("Case %d: %.2f\n",b,op);
	}
	return 0;
}
