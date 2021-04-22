#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n){

  int high, low, mid;
  high = n-1;
  low = 0;

  while(high>=low){

    mid = (high+low)/2;

    if((mid==0 && arr[mid+1]<arr[mid])||(mid==n-1&&arr[mid-1]<arr[mid])){
      return arr[mid];
    }
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
      return arr[mid];
    }

    if(arr[mid+1]>arr[mid]){
      low = mid+1;
    }
    else{
      high = mid-1;
    } 
  }

  return -1;
}

int main(){
  int n;
  cout<<"Enter size of array :  ";
  cin>>n;
  int arr[n];
  int i;

  cout<<"Enter elements of arrray : "<<endl;
  for(i=0; i<n; i++) cin>>arr[i];

  cout<<"Peak element is : "<<peakElement(arr, n)<<endl;

  return 0; 
}