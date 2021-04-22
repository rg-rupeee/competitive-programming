#include <bits/stdc++.h>
using namespace std;

class Stack{
private:
  queue<int> q1, q2;
public:
  void push(int x);
  void pop();
  void top();
};

void Stack::push(int x){
  q2.push(x);
  while(!q1.empty()){
    q2.push(q1.front());
    q1.pop();
  }
  //swap queues
  queue<int> q;
  q = q1;
  q1 = q2;
  q2 = q;
  cout<<"Pushed into stack "<<x<<endl;
}

void Stack::pop(){
  if(q1.empty()){
    cout<<"Queue is empty "<<endl;
  }
  else{
    cout<<"Pooped from stack "<<q1.front()<<endl;
    q1.pop();
  }
}

void Stack::top(){
  if(q1.empty()){
    cout<<"Queue is empty "<<endl;
  }
  else{
    cout<<"Top of stack "<<q1.front()<<endl;
  }
}

int main(){

  Stack s;
  s.pop();
  s.top();
  s.push(2);
  s.top();
  s.push(22);
  s.top();
  s.push(222);
  s.push(2222);
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  s.top();


  return 0;
}