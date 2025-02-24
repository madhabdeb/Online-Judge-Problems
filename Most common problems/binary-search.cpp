#include<stdio.h>
int main()
{
	int a,b,c,beg=0,end,x=0,mid,arr[100];
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&arr[b]);
	}
	scanf("%d",&c);
	end=a-1;
	while(beg<=end&&arr[mid]!=c)
	{
		mid=(beg+end)/2;
		
		if(arr[mid]==c)
		{
			printf("found\n");
			x=1;
			break;
		}
		else if(arr[mid]<c)
		{
			beg=mid+1;
		}
		else if(arr[mid]>c)
		{
			end=mid-1;
		}
	}
	
	if(x==0)
	{
		printf("not found\n");
	}
}
