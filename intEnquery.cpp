#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[200];
int s[200];
int main()
{
  int i=0,j,k,p;
  while(scanf("%s",a))
  {
    if(a[0]=='0')
    break;
    p=199;
    for(i=strlen(a)-1;i> -1;i--)
    {
      k=s[p]+a[i]-48;
      s[p--]=k%10;
      s[p]+=k/10;
    }
  }
  for(i=0;;i++)
  if(s[i]) break;
  
  for(;i<200;i++)
  printf("%d",s[i]);
  cout<<endl;
  return 0;
}
