/*------------------------------------------------*/
//Uva Problem No: 10970
//Problem Name  : Andy's First Dictionary
//Type          : ad hoc, DP, memoization, recursion.
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
    int n,m;
    while(cin>>n>>m)
    {
        cout<<(n*m)-1<<endl;
    }
    return 0;
}
