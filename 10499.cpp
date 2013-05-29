/*------------------------------------------------*/
//Uva Problem No: 10499
//Problem Name  : The Land of Justice
//Type          : ad hoc, math.
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
    ll T;
    while(cin>>T && T>0)
    {
        if(T==1)
            cout<<T*0<<"%"<<endl;
        else
            cout<<T*25<<"%"<<endl;
    }
    return 0;
}
