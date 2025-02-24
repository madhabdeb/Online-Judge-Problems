#include<stdio.h>

int main()
{
    int a,n;
    scanf("%d",&n);
    if(n%2==0)
    {
        a=n/2;
        if(a>=2)
        printf("YES");
        else
        printf("NO");
    }
    else
    {
    printf("NO");
    }

    return 0;

}
