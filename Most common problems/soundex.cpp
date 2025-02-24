#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,n; 
	char arr[100],xx[100];
	while(scanf("%s",arr))
	{
		
		for(a=0;a<=strlen(arr);a++)
		{
			if(arr[a]=='B')
			{
				if(n!=1)
			printf("1");
			n=1;
			}
		else if(arr[a]=='F')
		{
			if(n!=1)
			printf("1");
			n=1;
		}
		else if(arr[a]=='P')
		{
			if(arr[a]!=arr[a-1]&&(n!=1))
			
			printf("1");
			n=1;
		}
		else if(arr[a]=='V')
		{ 
			if(arr[a]!=arr[a-1]&&(n!=1))
			printf("1");
			n=1;
		}
		else if(arr[a]=='C')
		{	
			if(arr[a]!=arr[a-1]&&(n!=2))
			printf("2");
			n=2;
		}
		else if(arr[a]=='G')
		{
			if(arr[a]!=arr[a-1]&&(n!=2))
			
			printf("2");
			n=2;
		}
		else if(arr[a]=='J')
		{
			if(arr[a]!=arr[a-1]&&(n!=2))
			printf("2");
			n=2;
		}
		else if(arr[a]=='K')
		{	
			if(arr[a]!=arr[a-1]&&(n!=2))
		
			printf("2");
			n=2;
		}
		else if(arr[a]=='S')
		{	
			if(arr[a]!=arr[a-1]&&(n!=2))	
			printf("2");
			n=2;
		}
		else if(arr[a]=='X')
		{if(arr[a]!=arr[a-1]&&(n!=2))
			printf("2");
			n=2;
		}
		else if(arr[a]=='Z')
		{if(arr[a]!=arr[a-1]&&(n!=2))
			printf("2");
			n=2;
		}
		else if(arr[a]=='D')
		{if(arr[a]!=arr[a-1]&&(n!=3))
			printf("3");
			n=3;
		}
		else if(arr[a]=='T')
		{if(arr[a]!=arr[a-1]&&(n!=3))
			printf("3");
			n=3;
		}
		else if(arr[a]=='L')
		{if(arr[a]!=arr[a-1]&&(n!=4))
			printf("4");
			n=4;
		}
		else if(arr[a]=='M')
		{if(arr[a]!=arr[a-1]&&(n!=5))
			printf("5");
			n=5;
		}
		else if(arr[a]=='N')
		{if(arr[a]!=arr[a-1]&&(n!=5))
			printf("5");
			n=5;
		}
		else if(arr[a]=='R')
		{if(arr[a]!=arr[a-1]&&(n!=6))
			printf("6");
			n=6;
		}
		else if(arr[a]=='A')
		{
			n=0;
		}
		else if(arr[a]=='E')
		{
			n=0;
		}else if(arr[a]=='I')
		{
			n=0;
		}
		else if(arr[a]=='O')
		{
			n=0;
		}
		else if(arr[a]=='U')
		{
			n=0;
		}
		else if(arr[a]=='H')
		{
			n=0;
		}
		else if(arr[a]=='W')
		{
			n=0;
		}
		else if(arr[a]=='Y')
		{
			n=0;
		}
		
		}
		printf("\n");
		
	}
}
