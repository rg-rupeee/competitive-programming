#include <bits/stdc++.h>
using namespace std;

int minDif(int arr[], int no, int n){

  int low, high, mid;
  low = 0;
  high = n-1;

  while(low<=high)
  {
    mid = low + (high-low)/2;

    if(arr[mid] == no){
      return arr[mid];
    }
    else if(arr[mid]>no){
      high = mid-1;
    }
    else{
      low = mid+1;
    }
  }

  return (arr[low]>arr[high]) ? arr[high] : arr[low];
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

  cout<<"minimum difference element in array is : "<<minDif(arr, no, n)<<endl;
}