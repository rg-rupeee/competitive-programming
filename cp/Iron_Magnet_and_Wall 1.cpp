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
  ll i=0;
  ll iron[n] = {0};
  ll shcnt=0;
  ll j, p, ans=0;
  bool found;
  while(i<n){
    
    if(str[i] == 'M'){
      
      
      //check left of magnet first
      found = false;
      shcnt=0;
      j=i-1;
      while(j>=0){
        if(str[j] == 'I'){
          if(iron[j] == 0){
            p = k + 1 + abs(j-i) + shcnt++;
            if(p>0){
              iron[j] = 1;
              ans++;
              found = true;
              break;
            }
          }
        }
        else if(str[j] == 'X'){
          
          break;
        }
        else if(str[j] == ':'){
          shcnt++;
          
        }

        p = k + 1 + abs(j-i) + shcnt++;
          if(p<=0) {
            break;
          }
        
        j--;
      }
      
      

      // check right of magnet second  if not found in left
      if(!found){
          shcnt=0;
          j=i+1;
          while(j<n){
            if(str[j] == 'I'){
              if(iron[j] == 0){
                p = k + 1 + abs(j-i) + shcnt++;
                if(p>0){
                  iron[j] = 1;
                  ans++;
                  break;
                }
              }
            }
            else if(str[j] == 'X'){
              break;
            }
            else if(str[j] == ':'){
              shcnt++;
            }

            p = k + 1 + abs(j-i) + shcnt++;
              if(p<=0) {
                break;
              }
            
            j++;
          }
  
      }
      

    }
    i++;
  }

  cout<<ans<<endl;

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