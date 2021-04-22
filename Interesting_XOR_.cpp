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
  

void solve(){
  ll c, temp;
  cin>>c;
  if(ceil(log2(c)) == floor(log2(c))){
    temp = c+1;
  }
  else{
    temp = c;
  }
  ll n;
  n = pow(2, ceil(log(temp)/log(2)));

  // cout<<"c "<<c<<endl;
  
  ll ans = LLONG_MIN;
  ll i, j;
  j = ~(-n);
  j = j>>1;
  i = c^j;
  ans = i*j;
  // for(i=n/2; i<n; i++){
  //   // for(j=0; j<n; j++){
  //     if(((i^j)==c)){
  //     // cout<< (i*j) <<" "<<(i^j)<<endl;
  //       if((i*j)>ans){
  //         ans = i*j;
  //       }
  //     }
  //   // }
  // }
  cout<<ans<<'\n';
}

int main()
{
  
   fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }

   return 0;
}