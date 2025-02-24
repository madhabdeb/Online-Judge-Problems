#include<stdio.h>
int main()
{
	int u,v,x,y,a,b;
	while(scanf("%d%d%d%d",&u,&v,&x,&y),u,v,x,y)
	{ a=0,b=0;
		if((u==x)&&(v==y)){
			printf("0\n");
		}
		else if(u==x)
		{
			printf("1\n");
		}
		else if(v==y)
		{
			printf("1\n");
		}
	
		else if((u==y)&&(v==x)){
			printf("1\n");
		}
		else if((u>v)&&(x>y))
		
		{
		a=u-v;
		b=x-y;
		if(a==b)
		{
			printf("1\n");
			}
			else 
			{
			printf("2\n");	
		}
		}
		
		else if((v>u)&&(x>y))
		
		{
		a=v-u;
		b=x-y;
		if(a==b)
		{
			printf("1\n");
			}
			else 
			{
			printf("2\n");	
		}
		}
		
		else if((u>v)&&(y>x))
		
		{
		a=u-v;
		b=y-x;
		if(a==b)
		{
			printf("1\n");
			}
			else 
			{
			printf("2\n");	
		}
		}
		else if((v>u)&&(y>x))
		
		{
		a=v-u;
		b=y-x;
		if(a==b)
		{
			printf("1");
			}
			else 
			{
			printf("2");	
		}
		}
		else {
			printf("2");
		}
		
	}
	return 0;
}
