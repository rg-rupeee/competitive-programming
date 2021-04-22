#include <iostream>
using namespace std;

void MatPrint(int **arr, int s){
  int i, j;
  for(i=0; i<s; i++){
    for(j=0; j<s; j++){
      cout<<<<" ";
    }
    cout<<'\n';
  }
}

int main(){
  int arr[2][2] = { {1, 2}, {3, 4}};

  MatPrint((int **)arr, 2);

  return 0;
}