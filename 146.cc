#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        if(s=="#")
                break;
        if(next_permutation(s.begin(), s.end())){
            cout<<s<<endl;
        }
        else{
            cout<<"No Successor"<<endl;
        }
    }
    return 0;
}
