/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,a,n) for (i = a; i <= n; ++i)
#define REPR(i,n,a) for (i = n; i >= a; --i) 
 
int merge(int arr[], int l, int m, int r)
{
  int cnt=0;
  int n1, n2;
  n1 = m-l+1;
  n2 = r-m;
  int L[n1], R[n2];
  int i, j, k;
  for(i=0; i<n1; i++){
    L[i] = arr[l+i];
  }
  for(i=0; i<n2; i++){
    R[i] = arr[m+i+1];
  }
  i=0;
  j=0;
  k=l;

  while(i<n1 && j<n2){
    if(L[i]<=R[j]){
      arr[k] = L[i];
      i++;
    }
    else{
      arr[k] = R[j];
      cnt+=m-i;
      j++;
    }

    k++;
  }

   while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
  return cnt;
}
 
int mergeSort(int arr[],int l,int r){
  if(l>=r) return 0;

  int cnt=0;
  int mid = (l+r-1)/2;
  cnt += mergeSort(arr,l,mid);
  cnt += mergeSort(arr,mid+1,r);
  cnt += merge(arr,l,mid,r);
  return cnt;
}

  
void solve()
{
 // All The Best 
 // Stay Focused 
  int n;
  cin>>n;
  int i;
  int arr[n];
  rep(i, n){
    cin>>arr[i];
  }

  cout<<"answer: "<<mergeSort(arr, 0, n-1)<<endl;

  cout<<"sorted array is : "<<endl;
  rep(i, n){
    cout<<arr[i]<<" ";
  }  

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}