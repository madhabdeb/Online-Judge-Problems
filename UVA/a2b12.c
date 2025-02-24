 #include<stdio.h>

 int main(){

    int a,b=1,c=1,d,x;
    char ch[30],ch2[30],cp;
    gets(ch);
    b=1;c=1;
    for(a=0;ch[a]!='\0';a++)
    {
        if(isalpha(ch[a]))
        {
         cp=ch[a];
         continue;
        }
        else if(isdigit(ch[a])&&(isdigit(ch[a+1])))
        {
        b=(ch[a]-48);
        x=1;
        c=c*10;
        continue;
        }
        else if(isdigit(ch[a])&&(isdigit(ch[a-1])))
        {
        b=(b*c)+(ch[a]-48);
        x=1;
        c=c*10;
        }
        else
        {
            x=0;
            b=ch[a]-48;
        }
        if(x==1)
        {
            for(d=1;d<=b;d++)
            {
            printf("%c\n",cp);
            }
            b=0;
            c=1;
            x=0;
        }
        else
        {
           for(d=1;d<=b;d++)
            {
            printf("%c\n",cp);
            }
             b=0;
            c=1;
            x=0;
        }

    }


 }
