#include<stdio.h>

int main(){

    long long int a,m,n,x,p,q;

    scanf("%lld %lld%lld",&m,&n,&x);
    if((m<=x)&&(n<=x))
    {
        a=1;
    }
    else
    {
         p=(m+x-1)/x;
         q=(n+x-1)/x;
        a=p*q;
    }
    printf("%lld",a);

    return 0;
}
