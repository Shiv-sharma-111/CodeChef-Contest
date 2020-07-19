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
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
    }
    long long count=0;
    for(int i=1;i<n;i++)
    {
      count+=(abs(arr[i]-arr[i+1])-1);
    }
    cout<<count<<"\n";
  }
  return 0;
}
