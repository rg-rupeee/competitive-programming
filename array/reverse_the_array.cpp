#include <bits/stdc++.h>
using namespace std;

string reverseWord(string);

int main(){
  int t;
  cin>>t;
  while(t--)
  { 
    string s;
    cin>>s;
    cout<<reverseWord(s)<<endl;
  }
  return 0;
}



string reverseWord(string str){
    
  //Your code here
  
  string ans = "";
  long long n = str.length();
  long long i;
  
  for(i=n-1; i>=0; i--){
      ans+=str[i];
  }
  
  return ans;
}