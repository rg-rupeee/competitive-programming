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

char nextElement(char arr[], char ch, int st, int en){

  int mid;
  char res;

  while (st<=en)
  {
    
    mid = st + (en-st)/2;
    if(arr[mid] == ch){
      if(mid < en){
        return arr[mid+1];
      }
    }

    if(arr[mid]>ch){
      en = mid-1;
      res = arr[mid];
    }
    else
    {
      st = mid+1;
    }

  }
  

  return res;

}

int  main(){
 
  int n;
  cout<<"Enter size of array :  ";
  cin>>n;

  char arr[n];
  int i;
  cout<<"Enter elements of arrray : "<<endl;
  for(i=0; i<n; i++) cin>>arr[i];

  char ch;
  cout<<"Enter the char to find its next: ";
  cin>>ch;

  cout<<"Next Element is "<<nextElement(arr, ch, 0, n-1)<<endl;

  return 0;
}