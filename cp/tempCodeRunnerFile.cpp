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
  ll i=0, ans=0;
  

  // first iron or magnet
  char prev;
  ll prevInd;
  while (i<n)
  {
    /* code */
    if(str[i]=='I'){
      prev = 'I';
      prevInd = i;
      i++;
      break;
    }
    else if(str[i] == 'M'){
      prev = 'M';
      prevInd = i;
      i++;
      break;
    }
    i++;
  }
  
  bool blocked=false;
  bool occupied=false;
  ll p, sht=0;

  while (i<n)
  {

    
      cout<<i<<" "<<str[i]<<" "<<prev<<" *** "<<blocked<<" "<<prevInd<<" "<<occupied<<endl;
    
    
    if(str[i] == 'X'){
      blocked =  true;
      occupied = false;
    }
    else if(str[i] == ':'){
      sht++;
    }
    else if(str[i] == 'I'){
      if(blocked == true){
        blocked = false;
      }
      else{
        if(prev == 'M'){
          if(occupied == false){
            p = k+1-abs(prevInd-i)-sht;
            if(p>0){
              occupied = true;
              ans++;
              cout<<i<<" bl "<<blocked<<endl;
            }
          }
          
        }
      }
      
      sht = 0;
      prevInd = i;
      prev = 'I';
      blocked = false;
    }
    else if(str[i] == 'M'){
      if(blocked == true){
        blocked = false;
      }
      else{
        if(prev == 'I'){
          if(occupied == false){
            p = k+1-abs(prevInd-i)-sht;
            if(p>0){
              occupied = true;
              ans++;
              cout<<i<<" bl "<<blocked<<endl;
            }
          }
          else{
            occupied = false;
          }
        }
      }
      else
      {
        occupied = false;
      }
      
      sht = 0;
      prevInd = i;
      prev = 'M';
      blocked = false;

    }
    
    i++;
  }
  
  
  cout<<ans<<'\n';

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