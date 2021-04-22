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
  ll r, c, ans;
  cin>>r>>c;
  r--;
  c--;
  if(r<=c){
    if(c%2==0){
      ans = pow(c+1, 2) - r;
    }
    else{
      ans = pow(c+1, 2) - 2*c + r;
    }
  }
  else{
    if(r%2 != 0){
      ans = pow(r+1, 2) - c;
    }
    else{
      ans = pow(r+1, 2) - 2*r + c;
    }
  }

  cout<<ans<<endl;
}
  
void test(){
  int ans;
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      int r=i, c=j;
      if(r<c){
        if(c%2==0){
          ans = pow(c+1, 2) - r;
        }
        else{
          ans = pow(c+1, 2) - 2*c + r;
        }
      }
      else{
        if(r%2 != 0){
          ans = pow(r+1, 2) - c;
        }
        else{
          ans = pow(r+1, 2) - 2*r + c;
        }
      }
      cout<<" r: "<<r<<" c: "<<c<<" ans: "<<ans<<endl;
    }
  }
}

int main()
{
  // test();

   fast_io;

   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}