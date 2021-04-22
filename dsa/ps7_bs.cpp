#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int no, int st, int en){

  if(st>en){
    return -1;
  }

  int mid = st + (en-st)/2;


  if(arr[mid] == no){
    return mid;
  }
  else if(arr[mid] > no){
    return binarySearch(arr, no, st, mid-1);
  }
  else{
    return binarySearch(arr, no, mid+1, en);
  }
  
}

// find minimum element then apply binary search in two halves
int minValIndex(int arr[], int st, int en){
  int mid, nxt, prv, n;
  n = en-st+1;
  while(st<=en){
    mid = st + ((en-st)/2);
    nxt = (mid+1)%n;
    prv = (mid + n - 1)%n;

    if(arr[mid] <= arr[nxt] && arr[mid]<=arr[prv]){
      return mid;
    }
    else if(arr[st] <= arr[mid]){
      st = mid+1;
    }
    else{
      en = mid-1;
    }
  }
}

int solve(int arr[], int no, int st, int en){

  int a = binarySearch(arr, no, st, en);

  if(a == -1) {
    return binarySearch(arr, no, st, en);
  }
  
  return a;
}

int  main(){
 
  int n;
  cout<<"Enter size of array :  ";
  cin>>n;
  int arr[n];

  int i;
  cout<<"Enter elements of arrray : "<<endl;
  for(i=0; i<n; i++) cin>>arr[i];

  int no;
  cout<<"Enter the number to find : ";
  cin>>no;

  cout<<"Element found at index "<<solve(arr, no, 0, n-1)<<endl;

  return 0;
}