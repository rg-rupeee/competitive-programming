#include <bits/stdc++.h>
using namespace std;

//User function template for C++

class Solution{
  public:
    int middle(int a, int b, int c){
        //code here//Position this line where user code will be pasted.
        
        if((a>=b && a<=c)||(a<=b  && a>=c)){
            return a;
        }
        else if((b>=a && b<=c)||(b<=a && b>=c)){
            return b;
        }
        return c;
    }
};

int main(){
  int t;
  cin>>t;
  while(t--){
    int A, B, C;
    cin>>A>>B>>C;
    Solution ob;
    cout<<ob.middle(A,B,C)<<endl;
  }
  return 0;
}