#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll exp(ll x, ll n){
  if(x==0){
    return 0;
  }
  if(n==0){
    return 1;
  }
  if(n%2==0){
    ll temp = exp(x, n/2);
    return temp*temp;
  }
  else{
    return x*exp(x,n-1);
  }
}

ll mod_exp(ll x, ll n, ll m){
  if(x==0){
    return 0;
  }
  if(n==0){
    return 1;
  }
  if(n%2==0){
    ll temp = mod_exp(x,n/2,m);
    return ((temp*temp)%m);
  }
  else{
    return (((x%m)*mod_exp(x,n-1,m))%m);
  }
}

int main(){

  // ll n, x;
  // cin>>x>>n;
  // cout<<"ans = "<<exp(x,n);

  int A = 2, B = 5, C = 13;  
    cout << "Power is " << mod_exp(A, B, C);  

  return 0;
}