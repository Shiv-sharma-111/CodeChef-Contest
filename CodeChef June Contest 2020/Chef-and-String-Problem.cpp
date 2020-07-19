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
    string S;
    //getline(cin,S);
    cin>>S;
    int n = S.length();
    int count=0;
    if(n==1)
    {
      cout<<"0"<<"\n";
    }
    else
    {
      for(int i=0;i<n;i++)
      {
        if((S[i]=='x' && S[i+1]=='y') || (S[i]=='y' && S[i+1]=='x'))
        {
          count++;
          i++;
        }
      }
      cout<<count<<"\n";
    }
  }
  return 0;
}
