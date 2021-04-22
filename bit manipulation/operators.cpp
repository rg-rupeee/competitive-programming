#include <iostream>
using namespace std;

int main(){
  cout<<"size of int is "<<sizeof(int)*8<<" bits"<<endl;
  int x = 1;
  while(x!=0){
    cout<<x<<endl;
    x = x<<1;
  }
  
  return 0;
}