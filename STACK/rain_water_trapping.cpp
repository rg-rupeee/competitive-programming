#include <bits/stdc++.h>
using namespace std;

int water_trapped(int arr[], int n){
  


}

int main(){

  int n; 
  cin>>n;
  int arr[n];
  int i;
  for(i=0; i<n; i++){
    cin>>arr[i];
  }

  int ans = water_trapped(arr, n);

  cout<<"\namount of water trapped : "<<ans;

  return 0;
}