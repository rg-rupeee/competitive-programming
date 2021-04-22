#include <bits/stdc++.h>
using namespace std;

//search an element in bitonic array

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

int binarySearchdec(int arr[], int no, int st, int en){

  if(st>en){
    return -1;
  }

  int mid = st + (en-st)/2;


  if(arr[mid] == no){
    return mid;
  }
  else if(arr[mid] < no){
    return binarySearch(arr, no, st, mid-1);
  }
  else{
    return binarySearch(arr, no, mid+1, en);
  }  
}

int peakElement(int arr[], int n){

  int high, low, mid;
  high = n-1;
  low = 0;

  while(high>=low){

    mid = (high+low)/2;

    if((mid==0 && arr[mid+1]<arr[mid])||(mid==n-1&&arr[mid-1]<arr[mid])){
      return mid;
    }
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
      return mid;
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



int eleMnarr(int arr[], int no, int n){
  int p = peakElement(arr, n);
  int ans;
  ans = binarySearch(arr, no, 0, p);

  if(ans ==  -1){
    ans = binarySearchdec(arr, no, p+1, n-1);
  }

  return ans;
} 

int main(){
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

  cout<<"index of number in given array is : "<<eleMnarr(arr, no, n)<<endl;

  return 0; 
}