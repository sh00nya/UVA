#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<utility>


using namespace std;
int main()
{
    map<char,char>mirror;
    //mirror.insert(std::pair<char,char>('A','A'));
    mirror.insert(std::pair<char,char>('E','3'));
    mirror.insert(std::pair<char,char>('3','E'));
    mirror.insert(std::pair<char,char>('L','J'));
    mirror.insert(std::pair<char,char>('J','L'));
    mirror.insert(std::pair<char,char>('2','S'));
    mirror.insert(std::pair<char,char>('S','2'));
    mirror.insert(std::pair<char,char>('Z','5'));
    mirror.insert(std::pair<char,char>('5','Z'));
    /*mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    mirror.insert(std::pair<char,char>('',''));
    */

    string ss;
    while(cin>>ss)
    {
        if(equal(ss.begin(),ss.begin()+ss.size()/2,ss.rbegin()))
        {
            cout<<"YES"<<endl;
        }
        int rp=ss.size();
        bool ismirr;
        for(int i=0;i<ss.size()/2;i++)
        {
            rp--;
            if(ss[i]==ss[rp] || ss[i]==mirror[ss[rp]])
            {
                //cout<<ss[i]<<","<<ss[rp]<<","<<mirror[ss[rp]]<<endl;
                ismirr=true;
                //continue;
            }

            else{ismirr=false;break;}
        }
        if(ismirr) cout<<"Mirror"<<endl;
    }
    return 0;
}
