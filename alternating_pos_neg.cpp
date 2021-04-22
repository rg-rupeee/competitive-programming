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
  
  
void solveNaive()
{
 // All The Best 
 // Stay Focused 
  ll n;
  cin>>n;
  ll arr[n];
  ll i, j;
  rep(i, n){
    cin>>arr[i];
  }

  for(i=0; i<n; i++){
    if(!(i&1)){
      // find a negetive number and swap
      bool isFound=false;

      for(j=i; j<n; j++){
        if(arr[j]<0){
          swap(arr[i],arr[j]);
          isFound = true;
          break;
        }
      }

      if(!isFound){
        break;
      }
    }
    else{
      //find a positive number and swap
      bool isFound=false;

      for(j=i; j<n; j++){
        if(arr[j]>0){
          swap(arr[i],arr[j]);
          isFound = true;
          break;
        }
      }

      if(!isFound){
        break;
      }
    }
  }

  rep(i, n){
    cout<<arr[i]<<' ';
  }
  cout<<endl;

}

void rightRotate(int arr[], int st, int en){
  int temp;
  temp = arr[en];
  for(i=en; i>st; i--){
    arr[i] = arr[i-1];
  }
  arr[st] = temp;
}

void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  ll i, j;
  rep(i, n){
    cin>>arr[i];
  }

  for(i=0; i<n; i++){

    int outofplace = -1;

    
    

  }

  rep(i, n){
    cout<<arr[i]<<' ';
  }
  cout<<endl;
}
 
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}