#include<iostream>
#define ll long long
#define MAX 100000003
using namespace std;

int main() 
{
    ll num, n,ans=0,mult=1;
    cin>>num;
    n=num;
    
    while(n)
    {

      ll rem=n%10;

      if(rem>=5)
      {

        if(rem==9&&(n/10)==0)
        {
        }
        else
        {
          rem = 9 - rem;
        }
      }
      
      ans += rem * mult;
      mult *= 10;
      n /= 10;
    }
    cout << ans;
    return 0;
}