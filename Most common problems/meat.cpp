#include<stdio.h>
int main()
{
	long long a,b,c,d,e,f;
	while(scanf("%lld",&a)==1)
	{
	f=0;
	
	for(b=1;b<=a;b++)
	{
		scanf("%lld%lld",&c,&d);
		
		e=c*d;
		f=f+e;
		}
		printf("%lld\n",f);
	}
		
		return 0;
}
