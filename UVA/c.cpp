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
map<char,int>m;

int main()
{

    int a,b,arr[10][30],sum=0,num,n,x,i;
    char c,ch[500],ch1,c1,c2;
    string ss,sp,str;
    vector<string>vs,vp;
    vector<char>vc;
    vector<int>vi;

    while(cin>>ss)
    {

        n=ss.size();
        for(a=0; a<n; a++)
        {
            m[ss[a]]++;
            if (m[ss[a]]==1)
            {
                vc.push_back(ss[a]);
            }
        }
        x=vc.size();
        vi.resize(x,0);

        for(a=0; a<vc.size(); a++)
        {
            vi[a]=m[vc[a]];
        }

          for(a=0;a<vi.size();a++)
        {
            cout<<vi[a]<<endl;
        }

        for(a=0;a<n-1;a++)
        {
            for(b=0;b<n-a-1;b++)
            {
                if(vi[b]>vi[b+1])
                {
                    i=vi[b];
                   c=vc[b];

                    vi[b]=vi[b+1];
                    vc[b]=vc[b+1];

                    vi[b+1]=i;
                    vc[b+1]=c;
                }
            }
        }

        for(a=0;a<vi.size(); a++)
        {
            c=vc[a];
            printf("%d  %d\n",c,vi[a]);
        }


ss.clear();
m.clear();
vc.clear();
    }


    return 0;
}
