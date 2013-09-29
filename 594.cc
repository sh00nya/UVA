#include<iostream>
#include<bitset>

using namespace std;

int main(){
    int T;
    while(cin>>T){
        bitset<32> b(T);
        string s=b.to_string<char,std::string::traits_type,std::string::allocator_type>();
        string b1="",b2="",b3="",b4="";

        for(int i=0;i<8;i++){
            b1+=s[i];
        }
        for(int i=8;i<16;i++){
            b2+=s[i];
        }
        for(int i=16;i<24;i++){
            b3+=s[i];
        }
        for(int i=24;i<32;i++){
            b4+=s[i];
        }
        string res=b4+b3+b2+b1;
        int num=0;
        for(int i=0;i<32;i++){
            num=(num<<1)|(res[i]-'0');
        }
        cout<<T<<" converts to "<<num<<endl;
    }
    return 0;
}
