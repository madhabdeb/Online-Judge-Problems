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

    int a,b,arr[50],arr2[10][3],n,t,num,*p,i,x,r,k,valm;
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi;

//............................................................//

        /*         N!
    SINGLE =---------------
                  R!(N-R)!
        */


//............................................................//

    vi.resize(100,0);
    cin>>t;

    n=valm=r=1;
    for(a=0;a<t;a++)
    {
        cin>>arr[a];
    }

    for(b=t;b>=2;b--)  ////  N!
    {
        n*=b;
    }

      for(b=n-3;b>=2;b--)  ////  (N-R)!
    {
        valm*=b;
    }
 /*
     for(b=3;b>=2;b--)  /////    R!
    {
        r*=b;
    };*/

    r=3*2;   /// FACTORIAL

     i=n/(r*valm);
   cout<<i<<endl;

cout<<endl<<endl<<endl<<"madhab=="<<n<<endl;


     /*        */

    return 0;
}
