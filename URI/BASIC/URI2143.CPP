#include<stdio.h>

int main()
{
    int tst, i, n;
    while(scanf("%d", &tst) && tst)
    {
        for(i=1; i<=tst; i++)
        {
            scanf("%d", &n);
            if(n%2)
            { printf("%d", n*2-1);
            printf("ma\n");

            }
            else{
             printf("%d", n*2-2);
              printf("babaa\n");
        }
    }
    }
    return 0;
}
