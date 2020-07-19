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
    int count1=0,count2=0;
    while(n--)
    {
      int a,b;
      cin>>a>>b;
      int suma=0,sumb=0;
      while(a!=0)
      {
        int rem = a%10;
        suma+=rem;
        a=a/10;
      }
      while(b!=0)
      {
        int rem = b%10;
        sumb+=rem;
        b=b/10;
      }
      if(suma>sumb)
      {
        count1++;
      }
      else if(sumb>suma)
      {
        count2++;
      }
      else
      {
        count1++;
        count2++;
      }
    }
    if(count1>count2)
    {
      cout<<"0"<<" "<<count1<<"\n";
    }
    else if(count2>count1)
    {
      cout<<"1"<<" "<<count2<<"\n";
    }
    else
    {
      cout<<"2"<<" "<<count1<<"\n";
    }
  }
  return 0;
}
/*
2
3
10 4
8 12
7 6
2
5 10
3 4
*/
