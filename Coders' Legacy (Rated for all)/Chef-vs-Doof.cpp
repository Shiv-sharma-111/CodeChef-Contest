#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      if(a%2==0)
      {
        flag=1;
      }
    }
    if(flag==1)
    {
      cout<<"NO"<<"\n";
    }
    else{
      cout<<"YES"<<"\n";
    }
  }
  return 0;
}

// https://www.codechef.com/COLE2020/problems/
