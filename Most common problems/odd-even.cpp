#include<stdio.h>
int main()
{
	long long n,o,dc,re,qt;
	int bn[100],i=1,j;
	scanf("%lld",&n);
	for(o=1;o<=n;o++)
	{
	int c=0;
	scanf("%lld",&dc);
	qt=dc;
	while(qt!=0)
	{
		bn[i++]=qt%2;
		qt=qt/2;
	}
	for(j=i-1;j>0;j--)
	if(bn[j]!=0)
	{
		c=c+1;
		if(c%2==0){
		
		printf("Case %lld: even\n");
	}
	else
	{
	 printf("Case %lld: odd\n");
}
	}
}return 0;
}
