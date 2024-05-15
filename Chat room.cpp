#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
   cin >>s;
   string k="hello";
   int j=0,cnt=0;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]==k[j])
    {
        j++;
        cnt++;
    }
    if(cnt==5)break;
   }
   if(cnt==5)
   {
    cout<<"YES";
   }
   else
   cout<<"NO";

   return 0;
}
