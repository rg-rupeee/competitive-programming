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

struct eleCount
{
  ll e;
  ll c;
};
  

void solve()
{
 // All The Best 
 // Stay Focused 
  ll n, k;
  cin>>n>>k;
  ll i, j, l;
  ll arr[n];
  rep(i, n){
    cin>>arr[i];
  }

  if (k < 2)
        return;
 
    struct eleCount temp[k - 1];
    for (int i = 0; i < k - 1; i++)
        temp[i].c = 0;
 

    for (int i = 0; i < n; i++) 
    {
        int j;
 
        for (j = 0; j < k - 1; j++) 
        {
            if (temp[j].e == arr[i]) 
            {
                temp[j].c += 1;
                break;
            }
        }
 
        if (j == k - 1) {
            int l;
 
            for (l = 0; l < k - 1; l++)
            {
                if (temp[l].c == 0) 
                {
                    temp[l].e = arr[i];
                    temp[l].c = 1;
                    break;
                }
            }
 
            if (l == k - 1)
                for (l = 0; l < k; l++)
                    temp[l].c -= 1;
        }
    }
 
    for (int i = 0; i < k - 1; i++)
    {
        int ac = 0; // actual count
        for (int j = 0; j < n; j++)
            if (arr[j] == temp[i].e)
                ac++;
 
        if (ac > n / k)
            cout << "Number:" << temp[i].e
                 << " Count:" << ac << endl;
    }

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}