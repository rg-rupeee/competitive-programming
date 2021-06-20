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


ll dist(pair<ll,ll> p1, pair<ll, ll> p2){
  return (abs(p1.first-p2.first) + abs(p1.second-p2.second));
}

ll tot(pair<ll,ll> x,  pair<ll,ll> p1, pair<ll, ll> p2){
  return (dist(x, p1) + dist(p1, p2) + dist(p2, x));
}

void solve()
{
 // All The Best 
 // Stay Focused 
  ll n, m, i, j;
  cin>>n>>m>>i>>j;
  
  pair<ll, ll> p1, p2, p3, p4;
  pair<ll, ll> p;
  
  p.first = i;
  p.second = j;

  p1.first = 1;
  p1.second = 1;

  p2.first = n;
  p2.second = m;

  p3.first = n;
  p3.second = 1;

  p4.first = 1;
  p4.second = m;  

  pair<ll, ll> x, y;
  ll ans = tot(p, p1, p2);
  x = p1;
  y = p2;

  ll temp = tot(p, p2, p3);
  if(temp>ans){
    x = p2;
    y = p3;
    ans = temp;
  }

  temp = tot(p, p3, p4);
  if(temp>ans){
    x = p3;
    y = p4;
    ans = temp;
  }

  temp = tot(p, p4, p1);
  if(temp>ans){
    x = p4;
    y = p1;
    ans = temp;
  }

  temp = tot(p, p1, p3);
  if(temp>ans){
    x = p1;
    y = p3;
    ans = temp;
  }

  temp = tot(p, p2, p4);
  if(temp>ans){
    x = p2;
    y = p4;
    ans = temp;
  }

  cout<<x.first<<" "<<x.second<<" "<<y.first<<" "<<y.second<<'\n';
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