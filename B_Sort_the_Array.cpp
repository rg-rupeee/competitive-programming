/*
author : Instinct 
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
  
// #define for(i,n) for (i = 0; i < n; i++) 
// #define for(i,a,n) for (i = a; i <= n; i++)
// #define for(i,n,a) for (i = n; i >= a; i--) 
  

int arraySortedOrNot(int arr[], int n)
{
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return arraySortedOrNot(arr, n - 1);
}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arraySortedOrNot(arr,n)){
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
        return;
    }
    int start=0,end=n-1;
    for(int i=1;i<n;i++){
        if((arr[i-1]) > arr[i]){
            start=i-1;
            break;
        }
    }
    for(int i=start+1;i<n;i++){
        if(arr[i] < arr[i+1]){
            end=i;
            break;
        }
    }
    reverse(arr+start,arr+end+1);
    if(arraySortedOrNot(arr,n)){
        cout<<"yes"<<endl;
        cout<<start+1<<" "<<end+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}