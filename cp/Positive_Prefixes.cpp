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
  ll arr[n+1];
  ll i;
  int flag = 1;
  rep(i, n+1){
    if(flag){
      arr[i] = i;
    }    
    else{
      arr[i] = -i;
    }
    flag = 1-flag;
  }

  // REP(i, 1, n){
  //   cout<<arr[i]<<" ";
  // }
  
  ll curpos = n/2;
  ll diff;
  if(curpos>k){
    diff = curpos-k;
    for(i=n; i>0 && diff>0; i--){
      if(arr[i]>0){
        arr[i] = -i;
        diff--;
      }
    }
  }
  else if(curpos<k){
    diff = k-curpos;
    for(i=n; i>0 && diff>0; i--){
      if(arr[i]<0){
        arr[i] = i;
        diff--;
      }
    }
  }

  REP(i, 1, n){
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
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

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,k;
// 		cin>>n>>k;
// 		int arr[n+1]={0};
// 		int cnt=0,sum=0;
// 		if(n==k){
// 			for(int i=1;i<=n;i++)
// 				cout<<i<<" ";
// 			cout<<endl;
// 			continue;
// 		}
// 		if(n&1){
// 			for(int i=1;i<=n;i++){
// 			if(i&1)
// 				arr[i]=i;
// 			else
// 				arr[i]=i*(-1);
// 			}	
// 		}
// 		else{
// 			for(int i=1;i<=n;i++){
// 			if(i&1)
// 				arr[i]=i*(-1);
// 			else
// 				arr[i]=i;
// 			}
// 		}
// 		for(int i=0;i<=n;i++){
// 			sum += arr[i];
// 			if(sum>0)
// 				cnt++;
// 		}
// 		if(cnt==k){}
// 		else if(cnt>k){
// 			for(int i=n;i>0;i=i-2){
// 				arr[i] *= (-1);
// 				cnt--;
// 				if(cnt==k){
// 					break;
// 				}
// 			}
// 		}
// 		else{
// 			for(int i=1;i<=n;i++){
// 				if(arr[i] > 0){
// 					arr[i] *= (-1);
// 					cnt++;
// 				}
// 				if(cnt==k){
// 					break;
// 				}
// 			}
// 		}
// 		for(int i=1;i<=n;i++)
// 			cout<<arr[i]<<" ";
// 		cout<<endl;
// 	}
// 	return 0;
// }