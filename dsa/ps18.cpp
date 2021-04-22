#include <bits/stdc++.h>
using namespace std;

// search in row wise sorted and column wise sorted array

void findrc(int arr[4][4], int no, int m, int n){
  if(n==0)  cout<<"Element not found "<<endl;

  int i, j;
  i=0;
  j=n-1;

  while(i<n && j>=0){
    if(arr[i][j] == no){
      cout<<"Element found at :  ";
      cout<<"arr["<<i<<"]["<<j<<"]";
      return;
    }
    else if(arr[i][j]>no){
      j--;
    }
    else{
      i++;
    }
  }

  cout<<"Element not found "<<endl;
}

int main(){
  int m=4, n=4;
  // cout<<"Enter number of rows : "<<m<<endl;
  // cin>>m;
  // cout<<"Enter number of columns : "<<n<<endl;
  // cin>>n;

  int arr[4][4];
  int i, j;
  cout<<"Enter elements of array : "<<endl;
  for(i=0; i<m; i++){
    cout<<i+1<<" row :";
    for(j=0; j<n; j++){
      cin>>arr[i][j];
    }
    cout<<endl;
  }

  cout<<"Enter the element to find : "<<endl;
  int no;
  cin>>no;

  findrc(arr, no, m, n);

  return 0;
}