#include<stdio.h>
int main()
{
    int c,n,a,q,b,i,j,arr[30],sum;
    while(scanf("%d",&c)==1)
   {
       for(j=1;j<=c;j++)
		{
			b=0;
			sum=0;
			scanf("%d%d%d",&n,&a,&q);
			for(i=0;i<n;i++)
				{scanf("%d",&arr[i]);}
					if(a>n)
					{a=n;}
					for(i=0;i<a;i++)

 					{sum=sum+arr[i];}
					for(i=sum;i>q;i=i-arr[a-b])
					{b=b+1;}
					printf("Case %d: %d\n",j,a-b);
		}
	}
return 0;
}
