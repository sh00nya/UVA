#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
  int arr[2000001];
	long int i,num;
	while(scanf("%ld",&num) != EOF)
	{
		if(num==0)
			break;
		for(i=0;i<num;i++)
		{
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+num);
		for(i=0;i<num;i++)
		{
			printf("%d",arr[i]);
			if(i<num-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
