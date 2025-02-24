#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    int a,b,c,d,m,n,x,y;
    char ch[15],cc;
    gets(ch);
    scanf("%d",&n);
    for(a=0;ch[a]!='\0';a++)
    {
    b=ch[a]>=97&&ch[a]<=122?ch[a]:0;
    b+=n;
    if(b>122){
    b=96+(b-122);
    printf("%c",b);
    }
    else
    {
    printf("%c",b);
    }
    }
    return 0;
}

