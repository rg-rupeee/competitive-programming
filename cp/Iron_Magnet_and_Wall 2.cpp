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
  string str;
  cin>>ws;
  getline(cin,str);
  ll i=0, ans=0, p;
  // cout<<str<<endl;
  ll oc[n] = {0};
  bool blocked = false;
  ll sheet = 0;
  ll prevInd=-1;
  char prev;
  while(i<n){
    if(str[i] == 'I'){
      prev = str[i];
      prevInd = i;
      i++;
      break;
    }
    else if(str[i] == 'M'){
      prev = str[i];
      prevInd = i;
      i++;
      break;
    }
    i++;
  }
  // cout<<prev<<" "<<i<<endl;

  while(i<n){

    if(str[i] == 'I'){
      if(!blocked){
        if(prev == 'M'){
            if(oc[prevInd] == 0){
              p = k+1-abs(prevInd-i)-sheet;
              if(p>0){
                ans++;
                oc[i]=1;
              }
            }
        }//////////
      }
      blocked = false;
      sheet = 0;
      prevInd = i;
      prev = 'I';
    }
    else if(str[i] == 'M'){
      if(!blocked){
        if(prev == 'I'){
            if(oc[prevInd] == 0){
              p = k+1-abs(prevInd-i)-sheet;
              if(p>0){
                ans++;
                oc[i]=1;
              }
            }
        }
      }
      blocked = false;
      sheet = 0;
      prevInd = i;
      prev = 'M';
    }
    else if(str[i] == ':'){
      sheet++;
    }
    else if(str[i] == 'X'){
      blocked = true;
    }



    i++;
  }



  cout<<ans<<'\n';
}


  
int main()
{
  

fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}