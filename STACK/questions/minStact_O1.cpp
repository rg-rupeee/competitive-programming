#include <bits/stdc++.h>
using namespace std;

class minStack{
private:
  stack<int> s;
  int minEl;
public:
  void push(int x);
  void pop();
  int top();
  int getMin();
};

void minStack::push(int x){
  if(s.empty()){
    s.push(x);
    minEl = x;
  }
  else{
    if(x<minEl){
      s.push(x*2 - minEl);
      minEl = x;
    }
    else{
      s.push(x);
    }
  }
}

void minStack::pop(){
  if(s.empty()){
    return;
  }
  else{
    if(s.top()<minEl){
      minEl = 2*minEl - s.top();
      s.pop();
    }
    else{
      s.pop();
    }
  }
}

int minStack::top(){
  if(s.empty()){
    return -1;
  }
  else{
    if(s.top()>= minEl){
      return s.top();
    }
    else{
      return minEl;
    }
  }
}

int minStack::getMin(){
  if(s.empty()){
    return -1;
  }
  return minEl;
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