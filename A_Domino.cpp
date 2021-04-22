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
  ll a, b;
  ll top=0, bot=0;
  ll i;
  bool flag = false;
  rep(i, n){
    cin>>a>>b;
    top+=a;
    bot+=b;

    if((a&1)^(b&1)){
      flag = true;
    }
  }

  // if both sum are even
  if((!(top&1)) && (!(bot&1))){
    cout<<0<<'\n';
    return;
  }
  
  // if one is odd and other is even
  if((!(top&1))^(!(bot&1))){
    cout<<-1<<'\n';
    return;
  }


  if(flag){
    cout<<1<<'\n';
  }
  else{
    cout<<-1<<'\n';
  }
    

 }
   
 int main()
 {
   
    fast_io;
   
    solve();
   
    return 0;
 }