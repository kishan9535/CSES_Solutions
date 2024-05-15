#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

long long find_number(long long &row,long long &col){
    int t=max(row,col)-1;
    long long lower_limit=(t*t)+1;
        long long upper_limit=(t+1)*(t+1); 

        if(row>=col){
                   
                if(row&1)   //odd numbered L shaped
                        return lower_limit+col-1;
                return upper_limit-col+1;
        }
        else{
              
                if(col&1)   //odd numbered L shaped
                        return upper_limit-row+1;
                return lower_limit+row-1;
        }

}


int main() {
   
    int t;
    cin>>t;
    while(t--){
      long long x,y;
      cin>>x>>y;
      cout<<find_number(x,y)<<endl;
    }
    return 0;
    
}