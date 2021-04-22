#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a=0,b=0;
        for(int i=0;i<n;i++){
          // cout<<i<<" "<<arr[i]<<endl;
            if(arr[i] == 1){
                a++;
            }
            else if(arr[i] == 2){
                b++;
            }
            else{
                a++;
            }
        }
        cout<<a<<endl;
        // cout<<endl;
    }
    return 0;
}