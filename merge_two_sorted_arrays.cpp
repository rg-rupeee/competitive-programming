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
  
  
void naive_solve()
{
 // All The Best 
 // Stay Focused 
  ll n, m;
  cin>>n>>m;
  ll i, j;
  ll a[n];
  ll b[m];

  // remember a and b must be sorted
  rep(i, n){
    cin>>a[i];
  }
  rep(i, m){
    cin>>b[i];
  }

  ll temp;
  for(i=0; i<n; i++){
    if(a[i]>b[0]){
      // swap a[i] and b[0]
      temp = a[i];
      a[i] = b[0];
      b[0] = temp;

      //rearrange b
      j=0;
      while((b[j]>b[j+1]) && (j<m-1)){
        temp = b[j];
        b[j] = b[j+1];
        b[j+1] = temp;
        j++;
      }
    }
  }

  cout<<" array a : "<<endl;
  rep(i, n){
    cout<<a[i]<<" ";
  }
  cout<<"\n array b : "<<endl;
  rep(i, m){
    cout<<b[i]<<" ";
  }
  cout<<endl;
}

int nextGap(int  gap){
  if(gap<=1){
    return 0;
  }
  return (gap/2)+(gap%2);
}

void solve(){

  // GAP ALGORITHM

  ll n, m;
  cin>>n>>m;
  ll i, j;
  ll a[n];
  ll b[m];

  // remember a and b must be sorted
  rep(i, n){
    cin>>a[i];
  }
  rep(i, m){
    cin>>b[i];
  }

  ll gap=m+n;
  for(gap = nextGap(gap); gap>0; gap=nextGap(gap)){

    for(i=0; i+gap<n; i++){
      if(a[i]>a[i+gap]){
        swap(a[i],a[i+gap]);
      }
    }

    for((j=gap>n) ? (gap-n) : 0; i<n && j<m; i++, j++)
    {
      if(a[i]>b[j]){
        swap(a[i],b[j]);
      }
    }

    if(j<m){
      for(j=0; j+gap<m; j++){
        if(b[j]>b[j+gap]){
          swap(b[j], b[j+gap]);
        }
      }
    }

  }

 

  cout<<" array a : "<<endl;
  rep(i, n){
    cout<<a[i]<<" ";
  }
  cout<<"\n array b : "<<endl;
  rep(i, m){
    cout<<b[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}