#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int n;
   cin>>n;
    bool check =true;
    while(n!=0)
    {
        if(n%10==7||n%10==4)
        {
            n/=10;
        }
        else
        {
            check=false;
            break;
        }
    }
    if(check==false)
    {
        cout<<"NO";
    }
      if(n==0)
        cout<<"YES";


   return 0;
}
