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

    int a,b,arr[50],arr2[10][3],n,t,num,*p,i,x,total;
    char c,ch[300],ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi;



    while(cin>>n&&n!=0)
    {

        num=n;
        total=x=b=0;
        //cout<<n<<endl;
        while(num!=0)
        {

            i=num%2;
            total+=i;
            num=num/2;

            if(i==0)
            {
                 ch[x++]='0';
            }
            if(i==1)
                ch[x++]='1';

           // if(i==1 && num==0)
             //   ch[x++]='\0';
        }
        ch[x]='\0';
        strrev(ch);

        ss=ch;
        cout<<"The parity of "<<ss<<" is "<<total<<endl;
        ss.clear();
    }

    return 0;

}
