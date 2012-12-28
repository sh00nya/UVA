#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  int num;
	string temp;
	vector<string>::iterator it;
	while(scanf("%d",&num)!=EOF)
	{
		vector<string> files;
		int maxSize=0;
		for(int i=0;i<num;i++)
		{
			cin>>temp;
			files.push_back(temp);
			if((int)files[i].length()>maxSize)
				maxSize=files[i].length();
		}
		sort(files.begin(),files.end());
		//cout<<maxSize<<endl;
		int col=(60-maxSize)/(maxSize+2) +1;
		int row =num/col;
		if(num%row)
			row++;
			printf("------------------------------------------------------------");
		cout<<endl;
		for(int i=0;i<row;putchar('\n'),i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<files[i+row*j];
				for(int idx=files[i+row*j].length();idx<maxSize;idx++)
					printf(" ");
				if(j<col-1)
					printf(" ");
			}
		}
		
	}
	return 0;
}
