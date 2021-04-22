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
  ll n, k;
  cin>>n>>k;
  ll arr[n];
  ll i;
  rep(i, n){
    cin>>arr[i];
  }

  if(n==1) {
    cout<<-1<<'\n';
    return;
  }

  sort(arr, arr+n, greater<ll>());

  // rep(i, n){
  //   cout<<arr[i]<<" ";
  // }
  // cout<<endl;   

  ll acnt=0, bcnt=0, cur;
  i=0;
  ll ans=0;

  while((acnt<k || bcnt<k) && i<n){
    ans++;
    cur = arr[i];

    //two possiblities for cur
    bool flag = true;

    if(acnt+cur<=k){
      acnt+=cur;
      flag = false;
    }
    else if(bcnt+cur<=k){
      bcnt+=cur;
      flag = false;
    }

    if(flag){
      ll ag, bg;
      ag = acnt+cur-k;
      bg = bcnt+cur-k;

      if(acnt<k && bcnt<k){
        if(ag>bg){
          bcnt+=cur;
        }
        else{
          acnt+=cur;
        }
      }
      else if(acnt<k && bcnt>=k){
        acnt+=cur;
      }
      else{
        bcnt+=cur;
      }

    }

    // cout<<acnt<<" "<<bcnt<<'\n';
    i++;
  }

    // cout<<acnt<<" "<<bcnt<<'\n';

    if(acnt>=k && bcnt>=k){
      cout<<ans<<'\n';
    }
    else{
      cout<<-1<<'\n';
    }
}

void solveOpt(){

  ll n;
  cin>>n;
  ll arr[n];
  ll i;
  rep(i, n){
    cin>>arr[i];
  }
  if(n==1){
    cout<<-1<<'\n';
  }
  else{

    



  }
}



int main()
{
  
   fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solveOpt();
   }
 
   return 0;
}