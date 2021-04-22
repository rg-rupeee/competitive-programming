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
/*  
template<typename T> void scan(T &x) { 
     x = 0;
     bool neg = 0;
     register T c = getchar(); 
  
   if (c == '-') 
     neg = 1, c = getchar(); 
  
   while ((c < 48) || (c > 57)) 
     c = getchar(); 
  
   for ( ; c < 48||c > 57 ; c = getchar()); 
  
   for ( ; c > 47 && c < 58; c = getchar() )
     x= (x << 3) + ( x << 1 ) + ( c & 15 ); 
  
   if (neg) x *= -1; 
} 
  
template<typename T> void print(T n) 
{ 
     bool neg = 0; 
  
   if (n < 0) 
     n *= -1, neg = 1; 
  
   char snum[65]; 
   int i = 0; 
   do
   {
     snum[i++] = n % 10 + '0'; 
     n /= 10; 
   }
  
   while (n); 
     --i;
  
   if (neg) 
     putchar('-'); 
  
   while (i >= 0) 
     putchar(snum[i--]); 
  
  putchar('
'); 
}
*/
void solve()
{
 // All The Best 
 // Stay Focused 

  ll n;
  cin>>n;
  ll arr[n];
  ll i;
  rep(i, n){
    cin>>arr[i];
  }

  ll k; 
  cin>>k;

  ll temp = arr[k-1];

  sort(arr,arr+n);

  ll place;

  rep(i,n){
    if(arr[i] == temp){ 
      place = i;
      break;
    }
  }
  cout<<place+1<<'\n';
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