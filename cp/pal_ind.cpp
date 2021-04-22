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
  
bool isPallindrome(string s)
{
ll n = s.length();
  ll low, high;
  low = 0;
  high = n-1;
  bool flag = true;
  while(low<=high){
    if(s[low] != s[high]){
      flag = false;
      break;
    }
    
    low++;
    high--;
  }
  return flag;
}
  
void solve()
{
 // All The Best 
 // Stay Focused 
  string s;
  cin>>s;
  ll n = s.length();
  ll low, high;
  low = 0;
  high = n-1;
  ll ind=-1, hind;
  while(low<=high){
    if(s[low] != s[high]){
      ind = low;
      hind = high;
      break;
    }
    
    low++;
    high--;
  }

  if(ind == -1){
    cout<<-1<<endl;
    return;
  }

  string fs="";

  for(int i=0; i<n; i++){
    if(i==ind){
      continue;
    }
    fs+=s[i];
  }

  if(isPallindrome(fs)){
    cout<<ind<<endl;
  }
  else{
    cout<<hind<<endl;
  }

}
  
int main()
{
  
   //fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}