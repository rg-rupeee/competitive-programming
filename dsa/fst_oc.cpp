#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int no, int st, int en){

  if(st>en) return -1;

  int mid = st + (en-st)/2;

  if(arr[mid] == no){
    if(firstOccurence(arr, no, st, mid-1) == -1){
      return mid;
    }
    else{
      return firstOccurence(arr, no, st, mid-1);
    }
  }
  else if(arr[mid] > no){
    return firstOccurence(arr, no, st, mid-1);
  }
  else{
    return firstOccurence(arr, no, mid+1, en);
  }

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

  cout<<"First occurence of element found at index "<<firstOccurence(arr, no, 0, n-1)<<endl;

  return 0;
}