#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
  int T;
	cin>> T;
	for(int i=0;i<T;i++)
	{
		int N;
		char a;
		int b;
		map<char,int> M;
		cin>>N;
		for(int j=0;j<N;j++)
		{
			cin>>a;
			cin>>b;
			M[a]=b;
		}
		int K;
		cin>>K;
		int total=0;
		string S;
		for(int j=0;j<K;j++)
		{
			if(j==0)
				cin.ignore();
			getline(cin,S);
			int size=S.size();
			for(int k=0;k<size;k++)
				total+=M[S[k]];
		}
		cout << total/100 << "." << ((total%100 < 10 )?"0":"") << total%100;
		cout << "$" << endl;
	}
	return 0;
}
