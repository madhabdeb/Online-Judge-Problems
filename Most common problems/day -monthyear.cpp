#include<stdio.h>
int main()
{
	int d,y,m,x,t,v,u,z;
	scanf("%d",&d);
	if(d>=365)
	{
	
	x=d%365;
	t=d-x;
	y=t/365;
	printf("%d ano(s)\n",y);
	
	if(x>=30)
	{
		v=x%30;
		u=x-v;
		z=u/30;
		printf("%d mes(es)\n",z);
		printf("%d dia(s)\n",v);
	}
	else
	{
	
	printf("0 mes(es)\n");
	printf("%d dia(s)\n",x);
}
}
else 
{
		if(d>=30)
	{
		v=d%30;
		u=d-v;
		z=u/30;
		printf("0 ano(s)\n");
		printf("%d mes(es)\n",z);
		printf("%d dia(s)\n",v);
	}
	else
	{
	
	printf("0 mes(es)\n");
	printf("%d dia(s)\n",d);
}
}

 return 0;
}


