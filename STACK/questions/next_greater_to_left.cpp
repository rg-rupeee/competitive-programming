#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterToLeft(int arr[], int n){
    vector<int> v;
    stack<int> s;
    int i, cur;

    for(i=0; i<n; i++){
     cur = arr[i];
       if((!(s.empty())) && (s.top()>cur)){
        v.push_back(s.top());
       }
       else{
        while((!(s.empty())) && (s.top()<=cur)){
            s.pop();
        }
        if(s.empty()){
            v.push_back(-1);
        }
        else{
            v.push_back(s.top());
        }
       }
        s.push(cur);
    }
   
    return v;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans;
    ans = nextGreaterToLeft(arr, n);
    for(auto x: ans){
        cout<<x<<" ";
    }

    return 0;
}