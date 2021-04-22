// number of times sorted array is rotated 
// no duplicate elements

// [ 1, 2, 2, 2, 3, 4, 5, 5] is not a valid array 


#include <bits/stdc++.h>
using namespace std;

bs_times_rotated(int arr[], int n){

  int start_, end_, mid, next_, prev_;

  start_ = 0;
  end_ = n-1;

  while (start_<=end_)
  {
    mid = start_ + ((end_-start_)/2);
    next_ = (mid+1)%n;
    prev_ = (mid-1+n)%n; 

    if(arr[mid]<=arr[prev_] && arr[mid]<=arr[next_]){
      return mid;
    }
    else if(arr[start_] <= arr[mid]){
      start_ = mid+1;
    }
    else if(arr[mid] <= arr[end_]){
      end_ = mid-1;
    }
  }

}

int main(){
  int n;
  cout<<"Enter size of array :  ";
  cin>>n;
  int arr[n];

  int i;
  cout<<"Enter elements of arrray : "<<endl;
  for(i=0; i<n; i++) cin>>arr[i];

  cout<<"answer : "<<bs_times_rotated(arr, n)<<endl;

  return 0;
}
