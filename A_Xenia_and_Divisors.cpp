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
  ll n;
  cin>>n;
  ll arr[8];
  memset(arr, 0, sizeof(arr));
  ll i, temp;
  ll s1=0, s2=0, s3=0;
  ll noGroup = n/3;
  rep(i, n){
    cin>>temp;
    arr[temp]++;
  }
  
  // CHECK IF ANY INTEGER OTHER THEN 1, 2, 3, 4, 6 EXITS
  if(arr[5] || arr[7]){
    cout<<-1<<'\n';
    return;
  }

  // cout<<"h1"<<endl;
  if(arr[1]!=noGroup){
    cout<<-1<<'\n';
    //  cout<<"h2"<<endl;
    return;
  }
    //  cout<<"h3"<<endl;

  if(arr[4]>arr[2]){
    cout<<-1<<'\n';
    //  cout<<"h4"<<endl;
    return;
  }
    //  cout<<"h5"<<endl;
    s1 = arr[4];
    arr[2] = arr[2] - arr[4];
    arr[4] = 0;

  if(arr[6]!=arr[2]+arr[3]){
    cout<<-1<<'\n';
    //  cout<<"h6"<<endl;
    return;
  }
    //  cout<<"h7"<<endl;
    s2 = arr[2];
    s3 = arr[3];

  for(i=0; i<s1; i++){
    cout<<1<<" "<<2<<" "<<4<<'\n';
  }
  for(i=0; i<s2; i++){
    cout<<1<<" "<<2<<" "<<6<<"\n";
  }
  for(i=0; i<s3; i++){
    cout<<1<<" "<<3<<" "<<6<<"\n";
  }

}
  
int main()
{
  
   // For getting input from input.txt file
   // freopen("input.txt", "r", stdin);
   // Printing the Output to output.txt file
   // freopen("output.txt", "w", stdout);
  
   fast_io;
  
   solve();
  
   return 0;
}