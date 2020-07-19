#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n)
{

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    int n,k;
    cin>>n>>k;
    //int arr[n+1];
    long long sum=0,sum1=0;
    for(int i=1;i<=n;i++)
    {
      int k1;
      cin>>k1;
      sum+=k1;
      if(k1>k)
      {
        sum1+=k;
      }
      else
      {
        sum1+=k1;
      }
    }
    cout<<(sum-sum1)<<"\n";
  }
  return 0;
}
