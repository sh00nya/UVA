#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.ignore(1000,'\n');
    while(T>0)
    {
        string ss,ss2;
        string os="",os2="",s2="",s3="",s4="",s5="",s0="";
        unsigned t1,t2,t3,t4;

        getline(cin,ss);
        getline(cin,ss2);
        t1=ss.find_first_of('<');
        t2=ss.find_first_of('>');
        t3=ss.find_last_of('<');
        t4=ss.find_last_of('>');
        s0=ss.substr(0,t1);
        s2=ss.substr(t1+1,t2-t1-1);
        s3=ss.substr(t2+1,t3-t2-1);
        s4=ss.substr(t3+1,t4-t3-1);
        s5=ss.substr(t4+1);
        //ss.erase(ss.begin()+t1);
        //ss.erase(ss.begin()+t2);
        //ss.erase(ss.begin()+t3);
        //ss.erase(ss.begin()+t4);
        string os3=ss2.substr(0,ss2.find("..."));
        //cout<<os3<<"hi"<<endl;
        os=s0+s2+s3+s4+s5;
        os2=os3+s4+s3+s2+s5;
        //replace(ss2.begin(),ss2.end(),"...",os2);
        cout<<os<<endl<<os2<<endl;
        //cout<<t1<<t2<<t3<<t4;
        //cout<<s0<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5;

        T--;
    }
    return 0;
}
