#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <stack>
#include <queue>

using namespace std;


int main()
{

    int a,b,arr[110][110],n,t,num,i,j,x;

//............................................................//

    i=j=num=0;

    cin>>n;

    for(a=0;a<n;a++)
    {
        for(b=0;b<=a;b++)
        {
            cin>>num;
            arr[a][b]=num;
        }
    }

    for(a=n-2;a>=0;a--)
    {
        for(b=0;b<=a;b++)
        {
           i=arr[a+1][b]+arr[a][b];
           j=arr[a+1][b+1]+arr[a][b];
           if(a==0&&b==0)
           {
               x=i>j?i:j;
           }
           if(i>j)
           {
               arr[a][b]=i;
               num+=i;

           }
           else
           {
             arr[a][b]=j;
             num+=j;
           }
        }

    }

  cout<<x<<endl;

     /*        */

    return 0;
}
