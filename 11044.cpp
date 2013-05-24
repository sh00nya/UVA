/*------------------------------------------------*/
//Uva Problem No: 11044
//Problem Name  : Andy's First Dictionary
//Type          : ad hoc, simple math.
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

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T-->0)
    {
        int n,m;
        cin>>n>>m;
        cout<<(n/3)*(m/3)<<endl;
    }
    return 0;
}
