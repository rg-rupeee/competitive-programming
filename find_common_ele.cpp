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

  ll n1, n2, n3;
  cin>>n1>>n2>>n3;
  ll i, j, k;
  ll a[n1];
  ll b[n2];
  ll c[n3];
  
  // both arrays must be sorted
  rep(i, n1){
    cin>>a[i];
  }
  rep(i, n2){
    cin>>b[i];
  }
  rep(i, n3){
    cin>>c[i];
  }


  // rep(i, n1){
  //   cout<<a[i]<<" ";
  // }
  // cout<<endl;
  // rep(i, n2){
  //   cout<<b[i]<<" ";
  // }
  // cout<<endl;
  // rep(i, n3){
  //   cout<<c[i]<<" ";
  // }
  // cout<<endl;



  // finding duplicates in two in arrays
  vector<ll> ans;
  i=0; 
  j=0;
  k=0;
  while(i<n1 && j<n2 && k<n3){

    if(a[i]==b[j] && b[j]==c[k]){
      ans.push_back(a[i]);
      i++;
      j++;
      k++;
    }
    else if(a[i]>=b[j] && a[i]>=c[k]){

      if(a[i] == b[j]){
        k++;
      }
      else if(a[i] == c[k]){
        j++;
      }
      else{
        j++;
        k++;
      }

    }
    else if(b[j]>=a[i] && b[j]>=c[k]){

      if(b[j] == a[i]){
        k++;
      }
      else if(b[j] == c[k]){
        i++;
      }
      else{
        i++;
        k++;        
      }

    }
    else if(c[k]>=a[i] && c[k]>=b[j]){
      
      if(c[k] == a[i]){
        j++;
      }
      else if(c[k] == b[j]){
        i++;
      }
      else{
        i++;
        j++;  
      }
    }
  }

//   //remove duplicates from ans
// vector<int>::iterator ip; 
// ip = std::unique(ans.begin(), ans.end()); 
    
// ans.resize(std::distance(ans.begin(), ip)); 

  for(auto x: ans){
    cout<<x<<" ";
  }

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}