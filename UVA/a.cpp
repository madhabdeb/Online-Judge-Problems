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

    int a,b,arr[50],arr2[10][3],n,t,num,value,pre1,pre2,x;
    char c,ch[300],ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
      vector<int>vi;


    cin>>t;

    while(t--)
    {
        cin>>n;
        scanf("%c",&c);

        vi.resize(n,0);
        value=0;
        for(a=1;a<=n;a++)
        {

            gets(ch);
            ss=ch;
            if(a==1)
            {
                if(a==1&&ss=="LEFT")
                {
                    vi[a]=-1;
                    value+=vi[a];
                }
                if(a==1&&ss=="RIGHT")
                {
                    vi[a]=1;
                    value+=vi[a];
                }
            }
           else
            {
                if(a!=1&&ss=="LEFT")
                {
                    vi[a]=-1;
                     value+=vi[a];
                }
                else if(a!=1&&ss=="RIGHT")
                {
                    vi[a]=1;
                    value+=vi[a];

                }
                else if(a!=1&&ss=="SAME AS 1")
                {
                    vi[a]=vi[1];
                     value+=vi[a];
                }
                 else if(a!=1&&ss=="SAME AS 2")
                {
                    vi[a]=vi[2];
                   // cout<<vi[]
                     value+=vi[a];
                }
                 else if(ss=="SAME AS 3")
                {
                    vi[a]=vi[3];
                     value+=vi[a];
                }
                 else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 5")
                {
                    vi[a]=vi[5];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 6")
                {
                    vi[a]=vi[6];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 7")
                {
                    vi[a]=vi[7];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 8")
                {
                    vi[a]=vi[8];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 9")
                {
                    vi[a]=vi[9];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 10")
                {
                    vi[a]=vi[10];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 11")
                {
                    vi[a]=vi[11];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 12")
                {
                    vi[a]=vi[12];
                     value+=vi[a];
                }
             /*
//////////////////     AVABE BAKI GULU 100 POR JONTO CHOLTE HOBE AKHANE JUST 12 PORJONTO  ACE///////



              else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }
                  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }  else if(ss=="SAME AS 4")
                {
                    vi[a]=vi[4];
                     value+=vi[a];
                }*/

            }

        }//end loop
        cout<<value<<endl;
        vi.clear();

    }
    return 0;
}
