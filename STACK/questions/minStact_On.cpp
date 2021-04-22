#include <bits/stdc++.h>
using namespace std;

class minStack{
private:
  stack<int> s;
  stack<int> smin;
public:
  void push(int x);
  void pop();
  int top();
  int getMin();
};

void minStack::push(int x){
  if(s.empty()){
    s.push(x);
    smin.push(x);
  }
  else{
    if(smin.top()<=x){
      s.push(x);
      smin.push(smin.top());
    }
    else{
      s.push(x);
      smin.push(x);
    }
  }
}

void minStack::pop(){
  s.pop();
  smin.pop();
}

int minStack::top(){
  return s.top();
}

int minStack::getMin(){
  if(s.empty()){
    return -1;
  }

  return smin.top();
}

int main(){

  minStack ms;
  ms.push(12);
  ms.push(5);
  cout<<"min ele: "<<ms.getMin()<<endl;
  ms.push(3);
  cout<<"min ele: "<<ms.getMin()<<endl;
  ms.push(7);
  ms.push(9);
  cout<<"min ele: "<<ms.getMin()<<endl;
  ms.push(1);
  cout<<"min ele: "<<ms.getMin()<<endl;
  ms.push(16);

  ms.pop();
  cout<<"min ele: "<<ms.getMin()<<endl;
  ms.pop();
  cout<<"min ele: "<<ms.getMin()<<endl;
  ms.pop();
  ms.pop();
  ms.pop();
  cout<<"min ele: "<<ms.getMin()<<endl;
  ms.pop();
  ms.pop();
  cout<<"min ele: "<<ms.getMin()<<endl;





  return 0;
}