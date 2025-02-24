#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int a,b=0,c=0,d;
    char ch1[100],ch2[100];

    b=0;
    c=0;

    scanf("%s",&ch1);
    d=strlen(ch1);
    for(a=0;a<d;a++)
    {
        if(a%2==0)
        {
        b+=ch1[a]-48;
        }
        else
        {
        c+=ch1[a]-48;
        }
    }
    d=abs(b-c);
    if(d%11==0)
    printf("yes");
    else
    printf("no");


}

