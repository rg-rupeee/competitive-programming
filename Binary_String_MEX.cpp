/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

#define MAX_N 1e5 + 1
#define INF 1e9
#define MOD 1e9 + 7
#define LINF 1e18

#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, a, n) for (i = a; i <= n; ++i)
#define REPR(i, n, a) for (i = n; i >= a; --i)

string decToBinary(int n)
{
  // array to store binary number
  int binaryNum[32];

  // counter for binary array
  int i = 0;
  while (n > 0)
  {

    // storing remainder in binary array
    binaryNum[i] = (char)(n % 2);
    n = n / 2;
    i++;
  }

  // printing binary array in reverse order
  string bin = "";
  for (int j = i - 1; j >= 0; j--)
  {
    // cout << binaryNum[j];
    char bc;
    bc = (char)(binaryNum[j] + 48);
    // cout<<bc;
    bin = bin + bc;
  }
  // cout<<endl;
  return bin;
}

// int dectoBinary(string s){

// }

void solve()
{
  // All The Best
  // Stay Focused
  string s;
  cin >> s;
  int i, j, n;
  n = s.size();
  long long no_substr;
  no_substr = pow(2, n);
  vector<string> ans;
  for (i = 1; i < no_substr; i++)
  {
    string temp = "";
    for (j = 0; j < n; j++)
    {
      if (i & (1 << j))
      {

        temp += s[j];
      }
    }
    ans.push_back(temp);
  }
  sort(ans.begin(), ans.end());


  // for(i=0; i<no_substr; i++){
  //   cout<<ans[i]<<endl;
  //   // if(ans[i] != decToBinary(i)){
  //   //   cout<<ans[i]<<endl;
  //   //   break;
  //   // }  
  // }
  i=0;
  j=0;
  while(1){


    j++;
  }

}

int main()
{

  //fast_io;

  ull t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}