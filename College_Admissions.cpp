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
  
  int n, m, i, j;
  cin>>n>>m;
  
  vector<int> c_rank(n+1), s_rank(m+1);

  for(i=1; i<=n; i++)
    cin>>c_rank[i];

  for(j=1; j<=m; j++)
    cin>>s_rank[j];

  vector<vector<int>> app(m+1);

  auto comp = [&](int a, int b){
    return c_rank[a]<c_rank[b];
  };

  for(i=1; i<=m; i++){
    int k;
    cin>>k;
    vector<int> id(k);

    for(j=0; j<k; j++)  
      cin>>id[j];

    sort(id.begin(), id.end(), comp);

    app[i] = id;
  }

  auto comp2 = [&](int a, int b){
    return s_rank[a]<s_rank[b];
  };

  vector<int> rank_wise_index(m), alloted(n+1, 0);
  for(i=1; i<=m; i++){
    rank_wise_index[i-1] = i;
  }
  sort(rank_wise_index.begin(), rank_wise_index.end(), comp2);

  int found = 0;

  for(i=1; i<=n; i++){
    int s_id = rank_wise_index[i-1];
    for(j=0; j<app[s_id].size(); j++){
      int college_id = app[s_id][j];
      if(alloted[college_id] == 0){
        if(s_id == 1){
          cout<<college_id<<endl;
          found = 1;
        }
        alloted[college_id] = 1;
        break;
      }
    }
    if(found == 1){
      break;
    }

  }

  if(found == 0){
    cout<<found<<endl;
  }

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