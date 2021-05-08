/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,a,n) for (i = a; i <= n; ++i)
#define REPR(i,n,a) for (i = n; i >= a; --i) 
  
bool coprime(ll a, ll b) {
     
    if ( __gcd(a, b) == 1)
        return true;
    else
        return false;
}

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

void solve()
{
 // All The Best 
 // Stay Focused 
  ll n;
  cin>>n;
  ll arr[n];
  ll i;
  ll mx = -1;
  rep(i, n){
    cin>>arr[i];
    mx = max (mx, arr[i]);
  }
  ll p;
  i=mx+1;
  while(1){
    if(isPrime(i)){
      p = i;
      break;
    }
    i++;
  }
  // cout<<p<<'\n';
  ll ans[n];
  ll cnt = 0;
  for(i=1; i<n; i++){
    if(!(coprime(arr[i], arr[i-1]))){
      // cout<<i-1<<" "<<i<<" "<<arr[i-1]<<" "<<p;
      ans[cnt] = i;
      arr[i] = p;
      cnt++;
    }
  }

  cout<<cnt<<'\n';
  for(i=0; i<cnt; i++){
    cout<<ans[i]-1<<" "<<ans[i]<<" "<<arr[ans[i]-1]<<" "<<p<<'\n';
  }

}
  
int main()
{
  
   // For getting input from input.txt file
   // freopen("input.txt", "r", stdin);
   // Printing the Output to output.txt file
   // freopen("output.txt", "w", stdout);
  
   fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}