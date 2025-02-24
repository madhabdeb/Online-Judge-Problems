#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int main(void)
{
	int i,n,x;
	vector<int>v;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		v.push_back(x);
	}
	int sum=0;
	for(i=0;i<v.size();i++)
	{
		sum+=v[i];
	}
	printf("%d",sum);
}
