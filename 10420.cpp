#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <deque>
#include <string>

using namespace std;

int main ()
{
	int T;
	cin >> T;
	map<string,int> M;
	for( int i=0; i<T; ++i )
	{
		string line;
		if( i == 0 )
			cin.ignore();
		getline( cin, line );
		int pos = line.find(" ");
		string country;
		country=line.substr(0,pos);
		M[country]++;
	}
	for( map<string,int>::iterator it=M.begin(); it!=M.end(); ++it )
		cout << it->first << " " << it->second << endl;
}
