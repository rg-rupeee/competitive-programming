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
  
int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
  
// The main function to convert infix expression
//to postfix expression
void infixToPostfix(string s)
{
    std::stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    for(int i = 0; i < l; i++)
    {
          
        // If the scanned character is 
        // an operand, add it to output string.
        if((s[i] >= 'a' && s[i] <= 'z') || 
           (s[i] >= 'A' && s[i] <= 'Z'))
        ns+=s[i];
  
        // If the scanned character is an 
        // ‘(‘, push it to the stack.
        else if(s[i] == '(')
          
        st.push('(');
          
        // If the scanned character is an ‘)’, 
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ns += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
          
        //If an operator is scanned
        else{
            while(st.top() != 'N' && prec(s[i]) <= 
                                   prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
  
    }
    
    // Pop all the remaining elements from the stack
    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }
      
    cout << ns << endl;
  
}


void solve()
{
 // All The Best 
 // Stay Focused 
  string s;
  // s -> infix
  cin>>s;

  // convert s into postfix
  infixToPostfix(s);
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