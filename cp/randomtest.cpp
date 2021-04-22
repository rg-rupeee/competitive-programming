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
  
char characters[5] = {'I', 'M', '_', ':', 'X'};

ll inline randomNo(ll min, ll max){

  return (rand() % (max - min)) + min; 

}


ll naive(char str[], ll n, ll k){


  // ll n, k;
  // cin>>n>>k;
  // string str;
  // cin>>ws;
  // getline(cin,str);
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
            
            j++;
          }
  
      }
      

    }
    i++;
  }

  // cout<<ans<<endl;
  return ans;
}

ll optimised(char str[], ll n, ll k){

  // ll n, k;
  // cin>>n>>k;
  // string str;
  // cin>>ws;
  // getline(cin,str);
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
        }
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



  // cout<<ans<<'\n';
  return ans;

}

void test(){
  ll lengthStr = randomNo(1, 50);
  ll i, rnd;
  char str[lengthStr+1];
  for(i=0; i<lengthStr; i++){
    rnd =  randomNo(0,5);
    str[i] = characters[rnd];
    // cout<<str[i]<<" "<<rnd<<endl;
  }
  ll k = randomNo(0,10);

  if(naive(str,lengthStr,k) != optimised(str,lengthStr,k)){
    cout<<"ERRRRRRRRRRRRRRRRRRRRRR"<<endl;
    cout<<str<<" ** len: "<<lengthStr<<" ** K: "<<k<<endl;
    cout<<"naive = "<<naive(str,lengthStr,k)<<endl;
    cout<<"optimized = "<<optimised(str,lengthStr,k)<<endl;
    cout<<endl;
  }
  // else{
  //   cout<<"correct: "<<str<<" "<<lengthStr<<endl;
  // }
}


int main(){
  
  srand(time(0)); 

  ll i;
  rep(i,100){
    test();
  }
  
  
  return 0;
}

