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
    long long TS;
    cin>>TS;
    if(TS%2!=0)
    {
      long long count=0;
      for(long long i=2;i<TS;i=i+2)
      {
        count++;
      }
      cout<<count<<"\n";
    }
    else
    {
      while(TS%2!=1)
      {
        TS=TS/2;
        if(TS==0)
        {
          break;
        }
      }
      long long count=0;
      for(long long i=2;i<TS;i=i+2)
      {
        count++;
      }
      cout<<count<<"\n";
    }
  }
  return 0;
}
