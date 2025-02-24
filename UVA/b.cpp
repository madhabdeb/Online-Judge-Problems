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

using namespace std;




int main()
{

    int a,b,arr[50],arr2[10][3],n,t,num,value,pre1,pre2,x,i;
    char c,ch[300],ch1[10][100],cf,cs;
    float f;
    double d;
    string ss,sp;
    vector<string>vs;

    cin>>t;
    scanf("%c",&c);

    while(t--)
    {
        cin>>ss;
        cin>>n;
        scanf("%c",&c);
        x=ss.size();
        a=1;
        do
        {
            cf=getchar();
            scanf("%c",&c);
            cs=getchar();
            scanf("%c",&c);

            for(i=0;i<x;i++)
            {
                if(ss[i]==cs)
                {
                    ss[i]=cf;
                }
            }

        }
        while(a++<n);
        cout<<ss<<endl;
        ss.clear();
    }
    return 0;
}
