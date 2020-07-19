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
    int sum = n*n;
    int col=0;
    for(int i=1;i<=n;i++)
    {
      if(i%2!=0)
      {
        for(int j=((n*i)-n+1);j<=(n*i);j++)
        {
          cout<<j<<" ";
        }
        cout<<"\n";
      }
      else
      {
        for(int j=(n*i);j>(n*i)-n;j--)
        {
          cout<<j<<" ";
        }
        cout<<"\n";
      }
    }
  }
  return 0;
}
