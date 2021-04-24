#include <bits/stdc++.h>
using namespace std;

// create 2d matrix
// print 2d matrix
// get input in 2d matrix
 


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

vector<vector<int>> multiplyMatrix(vector<vector<int>> m1, vector<vector<int>> m2){
  
  int n = m1.size();
  
  // size of m1 is n*n
  // size of m2 is n*n

  int i, j, k, temp;
  vector<vector<int>> res(n);
  for(i=0; i<n; i++){
    vector<int> a(n);
    for(j=0; j<n; j++){
      temp = 0;
      for(k=0; k<n; k++){
        temp += m1[i][k] * m2[k][j];
      }
      a[j] = temp;
    }
    res[i] = a;
  }
  
  return res;
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