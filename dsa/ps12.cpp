#include <bits/stdc++.h>
using namespace std;

#define mx 10000

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


int Posbs(int arr[], int no){

  int low, high;
  low = 0;
  high =  1;

  while ( arr[high] != 0  &&  no > arr[high])
  {
    low = high;
    high = high*2;
  }

  cout<<low<<" "<<high<<endl;
  return binarySearch(arr, no, low, high);

}

int main(){

  int n;
  cout<<"Enter size of array :  ";
  cin>>n;
  int arr[mx];
  int i;
  for(i=0; i<mx; i++) {
    arr[i] = 10001;
  }

  cout<<"Enter elements of arrray : "<<endl;
  for(i=0; i<n; i++) cin>>arr[i];

  int no;
  cout<<"Enter the number to find : ";
  cin>>no;

  cout<<"Position of number in array is "<<Posbs(arr, no)<<endl;


  return 0;
}
