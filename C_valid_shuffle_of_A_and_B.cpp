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
  
// GREEDY: 
// fails for
// a=uv
// b=wx
// c=uwxw
void solve()
{
 // All The Best 
 // Stay Focused 
  string a, b, c;
  cin>>a>>b>>c;

  ll lenA, lenB, lenC;
  lenA = a.size();
  lenB = b.size();
  lenC = c.size();
  
  // check if length of C is equal to length of A+B
  if(lenC != lenA + lenB) {
    cout<<"NO"<<endl;
    return;
  }

  ll i=0, j=0, k=0;
  // i -> A
  // j -> B
  // k -> C
  bool flag = true;
  // first check A then B
  while(k<lenC){
    if(c[k] == a[i]){
      i++;
    }
    else if(c[k] == b[j]){
      j++;
    }
    else{
      flag = false;
      break;
    }
    k++;
  }
  
  if(flag){
    cout<<"YES"<<endl;
    return;
  }

  i=0;
  j=0; 
  k=0;
  while(k<lenC){
    if(c[k] == b[j]){
      j++;
    }
    else if(c[k] == a[i]){
      i++;
    }
    else{
      flag = false;
      break;
    }
    k++;
  }
  cout<<"YES"<<endl;
}
  
void solveDP(){
  string a, b, c;
  cin>>a>>b>>c;
}

int main()
{
  
   // For getting input from input.txt file
   // freopen("input.txt", "r", stdin);
   // Printing the Output to output.txt file
   // freopen("output.txt", "w", stdout);
  
   fast_io;
  
   solveDP();
  
   return 0;
}