#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){


    int a,b,c,d,e,g,f,h,x=1;
    char ch[8]={'A','K','I','L','I','P','I','P'};

    for(a=0;a<8;a++)
    {
         for(b=0;b<8;b++)
        {
             for(c=0;c<8;c++)
            {
                for(d=0;d<8;d++)
                {
                     for(e=0;e<8;e++)
                    {
                         for(f=0;f<8;f++)
                        {
                            for(g=0;g<8;g++)
                            {
                                 for(h=0;h<8;h++)
                                {
                                      if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&d!=e&&d!=f&&d!=g&&d!=h&&e!=f&&e!=g&&e!=h&&f!=g&&f!=h&&g!=h)
                                      printf("%c%c%c%c%c%c%c%c %d\n",ch[a],ch[b],ch[c],ch[d],ch[e],ch[f],ch[g],ch[h],x++);
                                }
                            }
                        }
                    }
                }

            }
        }
    }

}
