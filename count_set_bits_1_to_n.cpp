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
  
// tech dose
void solve1()
{
 // All The Best 
 // Stay Focused 

 int n;
 cin>>n;

  // time complexity = O(n)
  // space complexity = O(n)
  int ans= 0;
  int arr[n];
  arr[0] = 0;
  int i; 
  for(i=1; i<=n; i++){
    arr[i] = arr[i/2];
    if(i&1){
      arr[i]++;
    }
    ans+= arr[i];
  }

  cout<<ans<<endl;
}
  
int count_bits(int n){
  if(n==0){
    return 0;
  }

  // find smallest nearest power of 2
  int x = floor(log(n)/log(2));

  int ans;

  ans = (pow(2, x-1)*x) + (n - pow(2, x) + 1) + count_bits((n-pow(2, x)));
  return ans;
}

// pepcoding sumeet malik
void solve(){
  int n;
  cin>>n;

  // time complexity = O(log n)
  // space complexity = O(1)

  int ans;

  ans = count_bits(n);

  cout<<ans;
}

int main()
{
  
   //fast_io;
  
  //  solve1();

  solve();
  
   return 0;
}