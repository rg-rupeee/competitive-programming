#include <bits/stdc++.h>
using namespace std;


void MatPrint(vector<vector<int>> mat){
  int i, j, n;
  
  n=mat.size();
  // n*n matrix

  cout<<"array is: \n";
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      cout<<mat[i][j]<<" ";
    }
    cout<<'\n';
  }
}

int main(){

  int n;
  // cout<<"Enter size of 2D-array: ";
  cin>>n;

  vector<vector<int>> vv(n);
  int i, j, temp;
  
  // cout<<"Enter elements of array: "<<endl;
  for(i=0; i<n; i++){
    vector<int> v(n);
    for(j=0; j<n; j++){
      cin>>temp;
      v[j] = temp;
    }
    vv[i] = v;
  }

  MatPrint(vv);

  return 0;
}