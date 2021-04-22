// count element in sorted array


#include <bits/stdc++.h>
using namespace std;

int binfs(int arr[], int no, int n){

  int start_ = 0;
  int end_ = n-1;
  int mid;
  int ans = -1;
  while(start_<= end_){
    mid =  start_ + ((end_ - start_)/2);

    if(arr[mid] == no){
      ans = mid;
      end_ = mid-1;
    }
    else if(arr[mid] > no){
      end_ = mid-1;
    }
    else if(arr[mid] < no){
      start_ = mid+1;
    }

  }

  return ans;
}

int binls(int arr[], int no, int n){

  int start_ = 0;
  int end_ = n-1;
  int mid;
  int ans = -1;
  while(start_<= end_){
    mid =  start_ + ((end_ - start_)/2);

    if(arr[mid] == no){
      ans = mid;
      start_ = mid+1;
    }
    else if(arr[mid] > no){
      end_ = mid-1;
    }
    else if(arr[mid] < no){
      start_ = mid+1;
    }

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

  //first occurence
  int first = binfs(arr, no, n);

  int last = binls(arr, no, n);

  if(first == -1){
    cout<<"Element not found"<<endl;
  }
  else{
    cout<<"The number of time element "<<no<<" appears is "<<last-first+1<<endl;
  }

  return 0;
}