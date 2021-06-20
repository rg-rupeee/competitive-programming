#include <bits/stdc++.h>
using namespace std;

#define mx 1000001

bool isPrime[mx];

void seive(){
  int i, j;
  memset(isPrime, true, sizeof(isPrime));
  isPrime[0] = false;
  isPrime[1] = false;

  for(i=2; i*i<=mx; i++){
    if(isPrime[i]){
      for(j=i*i; j<mx; j=j+i){
        isPrime[j] = false;
      }
    }
  }
}

int main(){
  int t; 
  cin>>t;

  seive();

  while(t--){
    int l, r;
    cin>>l>>r;

    int i, prime1=-1, prime2=-1;  

    for(i=l; i<=r; i++){
      if(isPrime[i]){
        prime1 = i;
        break;
      }
    }

    if(prime1 == -1){
      cout<<-1<<'\n';
      continue;
    }
    
    for(i=r; i>prime1; i--){
      if(isPrime[i]){
        prime2 = i;
        break;
      }
    }

    if(prime2 == -1){
      cout<<0<<'\n';
      continue;
    }

    cout<<prime2-prime1<<'\n';
  }

  return 0;
}