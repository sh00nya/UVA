#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    string ss;
    while(cin>>ss)
    {
        if(equal(ss.begin(),ss.begin()+ss.size()/2,ss.rbegin()))
        {
            cout<<"YES";
        }
    }
    return 0;
}
