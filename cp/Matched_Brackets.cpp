#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

  ll n;
  cin>>n;
  ll depth=0, mxdepth=0, depthloc=0;
  ll cnt=0, mxcnt=0, cntloc=0;
  ll i, temp;
  ll bracketSt=0;

  for(i=1; i<=n; i++){

    if(!depth){
      cnt = 0;
      bracketSt = i;
    }

    cin>>temp;

    cnt++;

    if(temp == 1) 
      depth++;
    else
      depth--;

    if(depth>mxdepth) {
      depthloc = i;
      mxdepth = depth;
    }

    if(cnt>mxcnt){
      cntloc = bracketSt;
      mxcnt = cnt;
    }

  }

  cout<<mxdepth<<" "<<depthloc<<" "<<mxcnt<<" "<<cntloc<<'\n';

  return 0;
}


/*

    ((()(())()))

  nesting depth :  4
  count : 12

*/