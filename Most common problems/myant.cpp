#include<stdio.h>
int main()
{
	int a,b,c,d,vol=0,gh=0,l,w,h;
	while(scanf("%d",&a),a)
	{
	
	if(a==0)
	{
		break;
	}
	else
	{	d=1;
		for(b=1;b<=a;b++)
		{  
            scanf("%d%d%d",&l,&w,&h);  
            if(d==1){  
                gh=h;  
               vol=l*w*h;  
                d=0;  
            }  
            else{  
                if(gh<h){  
                    gh=h;  
                    vol=l*w*h;  
                }  
                else if(gh==h)  
                    if(l*w*h>vol)  
                        vol=l*w*h;  
            }  
        }  
		}
		printf("%d\n",vol);
	}

	return 0;
}
