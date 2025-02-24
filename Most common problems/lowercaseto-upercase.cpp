#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	double a,n;
	int ,b,c;
	scanf("%lf",&n);
	for(a=1;a<=n;a++)
	{
		scanf("%s",str);
		for(a=0;a<=strlen(str);a++)
		{
			if(str[a]>=97&&str[a]<=122)
			str[a]=str[a]-32;
		}
		printf("Case %lf: %s\n",a,str);
	}
	return 0;
}
