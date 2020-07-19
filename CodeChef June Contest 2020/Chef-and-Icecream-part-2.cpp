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
    //int count5=0,count10=0;
    int count5=0,count10=0,i=1,num=0,count15=0;
    while(i<=n)
    {
      if(arr[i]==5)
      {
        count5++;
        i++;
        num++;
      }
      else if(arr[i]==10 && count5>0)
      {
        count10++;
        count5--;
        i++;
        num++;
      }
      else if(arr[i]==15 && (count10>=1))
      {
        count10--;
        i++;
        num++;
      }
      else if(arr[i]==15 && (count5>=2))
      {
        count5 = count5-2;
        i++;
        num++;
      }
      else
      {
        break;
      }
    }
    if(num==n)
    {
      cout<<"YES"<<"\n";
    }
    else
    {
      cout<<"NO"<<"\n";
    }
  }
  return 0;
}
