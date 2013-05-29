/*------------------------------------------------*/
//Uva Problem No: 10161
//Problem Name  : Ant on a Chessboard
//Type          : ad hoc, math..
//Author        : Asit Mahato
//E-mail        : asitmahato@sh00nya.in
/*--------------------------------------------*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define ll long long

#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define memres(a,d) memset(a,d,sizeof(a))
typedef  unsigned long long ull;

using namespace std;

int main()
{
    ull T;
    while(cin>>T && T)
    {
        ull x=0,y=0;
        ull t1=0,r1=0;
        ull flr=floor(sqrt(T));
        ull cel=ceil(sqrt(T));
        ull cl2=cel*cel;
        ull fl2=flr*flr;
        t1=(cl2-T+1)%cel;
        r1=(cl2-T+1)/cel;
        if(cel&1)
        {
            //t1=(cl2-T+1)%cel;
            //r1=(cl2-T+1)/cel;
            //cout<<"t1"<<t1<<"===="<<"r1"<<r1<<endl;
            if(r1!=0 && t1!=0)
            {
                x=cel;
                y=T-fl2;
                //cout<<"r1 & t1"<<endl;
            }
            else if(t1)
            {
                y=cel;
                x=t1;
                //cout<<"t1"<<endl;
            }
            else if(r1)
            {
                y=cel-t1;
                x=cel;
                //cout<<"t1"<<endl;
            }
            else
            {
                x=cel;
                y=cel;
                //cout<<"else"<<endl;
            }
        }
        else
        {
            //cout<<"EVEN ROWS";
            //t1=(cl2-T+1)%cel;
            //r1=(cl2-T+1)/cel;
            //cout<<"t1"<<t1<<"===="<<"r1"<<r1<<endl;
            if(r1!=0 && t1!=0)
            {
                y=cel;
                x=T-fl2;
                //cout<<"r1 & t1"<<endl;
            }
            else if(t1)
            {
                x=cel;
                y=t1;
                //cout<<"t1"<<endl;
            }
            else if(r1)
            {
                x=cel-t1;
                y=cel;
                //cout<<"t1"<<endl;
            }
            else
            {
                x=cel;
                y=cel;
                //cout<<"else"<<endl;
            }
        }
        cout<<x<<" "<<y<<endl;

    }
    return 0;
}
