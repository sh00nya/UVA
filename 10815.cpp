/*------------------------------------------------*/
//Uva Problem No: 10815
//Problem Name  : Andy's First Dictionary
//Type          : Ad hoc
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
    set<string>res;
    string ss;
    while(cin>>ss)
    {
        string so="";
        for(int i=0;i<=ss.size();i++){
           if(isalpha(ss[i])){
            so+=tolower(ss[i]);
           }
           else if(so!=""){
           res.insert(so);
           so="";
           }
        }
    }
    for (std::set<string>::iterator it=res.begin(); it!=res.end();it++)
    cout<<*it<<endl;

    return 0;
}

