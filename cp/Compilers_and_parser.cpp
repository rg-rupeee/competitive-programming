/*
 author : Mr Rupesh Garhwal
 id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fst ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//implement stack
class stack_{
public:
  char stv[100000];
  ll top;
public:
  stack_(){
    top = -1;
  }

  void push(char ch){
    top++;
    stv[top] = ch;
  }

  char pop(){
    if(top<0){
      return '$';
    }
    top--;
    return stv[top+1];
  }

};


void solve()
{
  string str;
  cin>>ws;
  getline(cin,str);
  //cout<<str<<endl;
  ll i, len, ans;
  len = str.length();
  stack_ st;
  ans = 0;
  //cout<<len<<endl;
  for(i=0; i<len; i++){

    if(str[i] == '<'){
      st.push('<');
    }
    else
    {
      char ch = st.pop();
      if(ch != '<'){
        break;
      }
      ans += 2;
    }
    
  }
  
cout<<ans<<endl;

}

int main()
{
  //fst
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
