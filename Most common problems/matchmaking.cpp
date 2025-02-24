#include<stdio.h>
int main()
{
	int g,f,a,x=0,b,c,d,arb[10000],ars[10000];
	


	while(scanf("%d%d",&a,&b)==2)
	{
	long long e=0;
	if(a==0&&b==0)
	{
		break;
	}
	else 
	{
	
	
		x++;
		for(c=1;c<=a;c++)
		{
			scanf("%d",&arb[c]);
		}
		for(d=1;d<=b;d++)
		{
			scanf("%d",&ars[d]);
		}
		
		if(a<=b)
		{
		printf("Case %d: 0",x);
		}
	
		else 
		{
			
			e=a-b;
			g=arb[1];
			
			for(c=1;c<=a;c++)
			{
				
				if(g>=arb[c])
				{
					g=arb[c];
				}
				
			}
			
			printf("Case %d: %d %d\n",x,e,g);
		}
	}
	
}

return 0;
}
