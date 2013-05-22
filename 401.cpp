#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<utility>


using namespace std;
int main()
{
    map<char,char>mirror;
    mirror.insert(std::pair<char,char>('E','3'));
    mirror.insert(std::pair<char,char>('3','E'));
    mirror.insert(std::pair<char,char>('L','J'));
    mirror.insert(std::pair<char,char>('J','L'));
    mirror.insert(std::pair<char,char>('2','S'));
    mirror.insert(std::pair<char,char>('S','2'));
    mirror.insert(std::pair<char,char>('Z','5'));
    mirror.insert(std::pair<char,char>('5','Z'));

    mirror.insert(std::pair<char,char>('A','A'));
    mirror.insert(std::pair<char,char>('H','H'));
    mirror.insert(std::pair<char,char>('I','I'));
    mirror.insert(std::pair<char,char>('M','M'));
    mirror.insert(std::pair<char,char>('O','O'));
    mirror.insert(std::pair<char,char>('T','T'));
    mirror.insert(std::pair<char,char>('U','U'));
    mirror.insert(std::pair<char,char>('V','V'));
    mirror.insert(std::pair<char,char>('X','X'));
    mirror.insert(std::pair<char,char>('W','W'));
    mirror.insert(std::pair<char,char>('Y','Y'));
    mirror.insert(std::pair<char,char>('1','1'));
    mirror.insert(std::pair<char,char>('8','8'));

    string ss;
    while(cin>>ss)
    {
        bool ispal=false;
        if(equal(ss.begin(),ss.begin()+ss.size()/2,ss.rbegin()))
        {
            ispal=true;
        }
        int rp=ss.size();
        bool ismirr=false;
        for(int i=0;i<=ss.size()/2;i++)
        {
            rp--;
            //cout<<ss[i];
            if(ss[i]==mirror[ss[rp]])
            {
                //cout<<ss[i]<<","<<ss[rp]<<","<<mirror[ss[rp]]<<endl;
                ismirr=true;
            }

            else{ismirr=false;break;}
        }
        if(ismirr && ispal) cout<<ss<<" -- is a mirrored palindrome."<<endl<<endl;
        if(ismirr && !ispal) cout<<ss<<" -- is a mirrored string."<<endl<<endl;
        if(ispal && !ismirr) cout<<ss<<" -- is a regular palindrome."<<endl<<endl;
        if(!ispal && !ismirr) cout<<ss<<" -- is not a palindrome."<<endl<<endl;
    }
    return 0;
}
