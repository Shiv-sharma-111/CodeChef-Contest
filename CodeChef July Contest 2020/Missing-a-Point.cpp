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
    //int size = (4*n);
    int arrx[4*n],arry[4*n];
    for(int i=1;i<=4*n-1;i++)
    {
      cin>>arrx[i];
      cin>>arry[i];
    }
    int res1 = arrx[1];
    int res2 = arry[1];
    for(int i=2;i<=4*n-1;i++)
    {
      res1 = (res1^arrx[i]);
      res2 = (res2^ arry[i]);
    }
    cout<<res1<<" "<<res2<<"\n";
  }
  return 0;
}
