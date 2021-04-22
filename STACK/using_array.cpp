#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

class Stack{
private:
  int top;
public:
  int a[MAX];

  Stack(){
    top = -1;
  }

  bool push(int x);

  int pop();

  int peek();

  bool isEmpty();

};

bool Stack::push(int x){

  if(top>=MAX-1){
    cout<<"Stack overflow..."<<endl;
    return false;
  }
  else{
    top++;
    a[top] = x;
    cout<<"Pushed into Stack "<<x<<" ..."<<endl;
    return true;
  }

}

int Stack::pop(){

  if(top<0){
    cout<<"Stack underflow..."<<endl;
    return -1;
  }
  else{
    cout<<"Poped from Stack "<<a[top]<<" ..."<<endl;
    top--;
    return a[top+1];
  }

}

int Stack::peek(){
  if(top<0){
    cout<<"Stack is Empty..."<<endl;
    return -1;
  }
  else{
    return a[top];
  }
}

bool Stack::isEmpty(){
  return (top<0);
}

int main(){

  Stack s;
  cout<<"is Empty "<<s.isEmpty()<<endl;
  s.push(10);
  cout<<"peek: "<<s.peek()<<endl;
  s.push(20);
  s.push(30);
  s.push(40);
  cout<<"peek: "<<s.peek()<<endl;
  cout<<"is Empty "<<s.isEmpty()<<endl;
  s.push(50);
  s.push(60);
  s.push(70);
  cout<<"peek: "<<s.peek()<<endl;
  s.pop();
  s.pop();
  cout<<"peek: "<<s.peek()<<endl;
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  cout<<"peek: "<<s.peek()<<endl;
  s.pop();
  cout<<"peek: "<<s.peek()<<endl;
  cout<<"is Empty "<<s.isEmpty()<<endl;

  return 0;
}