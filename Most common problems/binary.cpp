#include<stdio.h>
int main()
{
  int a,m,dn,rem,q;
 int bn[100],z,i,j;
 scanf("%d",&m);
 for(a=1;a<=m;a++)
 {
 	i=1,z=0;
 	scanf("%d",&dn);
 	q=dn;
 	while(q!=0)
 	{
 		bn[i++]=q%2;
 		q=q/2;
	 }
	 for(j=i-1;j>0;j--)
	 {
	 	if(bn[j]==1){
		 
	 	z=z+1;
	 	//printf("$\n");
}
	 }
	 if(z%2==0)
	 {
	 	printf("Case %d: even\n",a);
	 	
	 }
	 else
	 {
	 	printf("Case %d: odd\n",a);
	 }
	 
	 //printf("%d",bn[j]);
 }
 return 0;
}
