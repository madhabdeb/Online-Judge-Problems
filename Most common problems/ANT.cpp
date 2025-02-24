#include <stdio.h>  
//author:XXYY  
int main(){  
    int T,l,w,h,maxh,t,max;  
    while(~scanf("%d",&T),T){  
        t=1;  
        maxh=max=0;  
        while(T--){  
            scanf("%d%d%d",&l,&w,&h);  
            if(t){  
                maxh=h;  
                max=l*w*h;  
                t=0;  
            }  
            else{  
                if(maxh<h){  
                    maxh=h;  
                    max=l*w*h;  
                }  
                else if(maxh==h)  
                    if(l*w*h>max)  
                        max=l*w*h;  
            }  
        }  
        printf("%d\n",max);  
    }  
    return 0;  
} 
