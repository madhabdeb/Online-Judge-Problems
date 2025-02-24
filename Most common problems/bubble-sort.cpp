#include<stdio.h>
int main()
{
	int a,b,c,k,n,z,arr[100];
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		scanf("%d",&arr[a]);
		
	}
	for(a=1;a<n;a++)
	{
		b=1;
		while(b<=n-a)
		{
			if(arr[b]>arr[b+1])
			{
				z=arr[b];
				arr[b]=arr[b+1];
				arr[b+1]=z;
			}
			b=b+1;
		}
	}
	
	for(a=1;a<=n;a++)
	{
		printf("%d\n",arr[a]);
	}
	
	
}
