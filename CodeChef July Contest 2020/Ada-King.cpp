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
    int k;
    cin>>k;
    int flag=0;
    for(int i=1;i<=8;i++)
    {
      for(int j=1;j<=8;j++)
      {
        if(i==1 && j==1)
        {
          cout<<"O";
          k--;
        }
        else
        {
          if(k==0)
          {
            flag=1;
          }
          if(flag==1)
          {
            cout<<"X";
          }
          if(flag==0)
          {
            cout<<".";
            k--;
          }
        }
      }
      cout<<"\n";
    }
  }
  return 0;
}
