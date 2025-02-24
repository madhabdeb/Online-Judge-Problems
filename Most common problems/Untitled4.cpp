#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b),a,b)
	{c=0;
	if(a>b)
	{
		c=a-b;
		printf("%d\n",c);
		}
		else 
		{
			c=b-a;
			printf("%d\n",c);
			}	
		
			
	}
	return 0;
}
