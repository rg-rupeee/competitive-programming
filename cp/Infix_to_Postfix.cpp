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
  
int precd(char c){
  if(c == '^')
    return 3;
  if(c == '*' || c == '/')
    return 2;
  if(c == '+' || c == '-')
    return 1;

  return 0;
}

bool isOperator(char c){
  if(c=='^' || c=='*' || c=='/' || c=='+' || c=='-'){
    return true;
  }

  return false;
}

bool IsOperand(char c)  
{  
if( c >= 'A' && c <= 'Z')
  return true;  

if (c >= 'a' && c <= 'z')
  return true;  

if(c >= '0' && c <= '9')
  return true;  

return false;  

} 

void solve()
{
// All The Best 
// Stay Focused 
  
  // infix to postfix
  
  stack<char> st;
  
  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll i;
  string ans = "";

  char temp;
  s+=')';
  st.push('(');

  rep(i, n+1){

    if(s[i] == '('){
      // cout<<"("<<endl;
      st.push(s[i]);
    }
    else if(s[i] == ')'){
      // cout<<")"<<endl;
      while(st.top() != '('){
        temp = st.top();
        // cout<<temp;
        ans += temp;
        st.pop();
      }
      if(!st.empty() && st.top()=='(')
        st.pop();
    }
    else if(isOperator(s[i])){
      // cout<<"operator "<<s[i]<<endl;
      while(!st.empty() && isOperator(st.top()) && precd(s[i])<precd(st.top())){
        temp = st.top();
        // cout<<temp;
        ans += temp;
        st.pop();
      }
      st.push(s[i]);
    }
    else if(IsOperand(s[i])){ 
      // cout<<"operand "<<s[i]<<endl;
      // cout<<s[i]<<endl;
      ans+=s[i];
    }

  }   

  cout<<ans<<endl;
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