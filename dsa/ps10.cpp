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

int ceilNo(int arr[], int no, int st, int en){

  int mid, result;

  while(st<=en){
    mid = st + ((en-st)/2);
    if(arr[mid] == no){
      return arr[mid];
    }
    else if(arr[mid] < no){
      st = mid+1;
    }
    else{
      result = arr[mid];
      en = mid-1;
    }  
  }

  return result;

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

  cout<<"ceil of Element is "<<ceilNo(arr, no, 0, n-1)<<endl;

  return 0;
}