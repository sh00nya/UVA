/*------------------------------------------------*/
//Uva Problem No: 442
//Problem Name  : Matrix Chain Multiplication
//Type          : parsing, stacks, matrix properties.
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
#define FOR(i,j,k) for(int i=j;i<k;i++)
typedef  unsigned long long ull;

using namespace std;

int main()
{
    int T,R,C;
    map<char,pair<int,int> >M;
    pair<int,int> tmp;
    char A;
    cin>>T;
    FOR(i,0,T)
    {
        cin>>A>>R>>C;
        tmp=make_pair(R,C);
        //cout<<tmp.first<<tmp.second;
        M[A]=tmp;
    }
    cin.ignore();
    string inp;
    stack<char>exp;
    while(getline(cin,inp))
    {
        
        int res=0;
        bool err=false;
        char a='a';
        FOR(i,0,inp.size())
        {
            if(inp.size()==1) break;
            exp.push(inp[i]);
            if(exp.top()==')')
            {
                exp.pop();
                char X=exp.top();
                //cout<<"X"<<X<<endl;
                exp.pop();
                char Y=exp.top();
                //cout<<"Y"<<Y<<endl;
                if(M[Y].second==M[X].first)
                {
                    res+=M[Y].first * M[Y].second * M[X].second;
                    M[a]=make_pair(M[Y].first,M[X].second);
                    exp.pop();
                    exp.pop();
                    exp.push(a++);
                }
                else
                {
                    cout<<"error"<<endl;
                    err=true;
                    break;
                }
                //exp.pop();
                //cout<<exp.top()<<endl;
                //exp.pop();
            }
        }
        if(!err)
            cout<<res<<endl;




    }

    return 0;
}
