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
    
    
  void solve()
  {
  // All The Best 
  // Stay Focused 

    ll n;
    cin>>n;
    ll i;
    ll a[n];
    ll one=0, zero=0;
    rep(i, n){
      cin>>a[i];
      if(a[i] == 1){
        one++;
      }
      else{
        zero++;
      }
    }

      ll j, k, cnt, mx=0;
      for(i=0; i<n; i++){
        for(j=i; j<n; j++){
          cnt = 0;
          for(k=i; k<=j; k++){
            if(a[k] == 0){
              cnt++;
            }
            else{
              cnt--;
            }
          }
          // cout<<cnt<<endl;
          mx = max(mx, cnt);
        }
      }
      // cout<<mx<<endl;
      ll ans;
      if(mx == 0){
        ans = one-1;
      }else{
        ans = mx+one;
      }
      cout<<ans<<'\n';
  }
    
  int main()
  {
    
    fast_io;
    
    solve();
    
    return 0;
  }