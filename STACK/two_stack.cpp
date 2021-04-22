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

#define mx 100

class twoStacks{
private:
  int arr[mx];
  int top1, top2;
public:
  twoStacks(){
    top1 = -1;
    top2 = mx;
  }

  void push1(int x);
  void push2(int x);
  int pop1();
  int pop2();
};

void twoStacks::push1(int x){
  if(top1+1 ==   top2){
    cout<<"Stack overflow"<<endl;
  }
  else{
    top1++;
    arr[top1] = x;
    cout<<"Pushed into stack-1 "<<x<<endl;
  }
}

void twoStacks::push2(int x){
  if(top1+1 ==   top2){
    cout<<"Stack overflow"<<endl;
  }
  else{
    top2--;
    arr[top2] = x;
    cout<<"Pushed into stack-2 "<<x<<endl;
  }
}

int twoStacks::pop1(){
  if(top1 == -1){
    cout<<"Stack underflow"<<endl;
  }
  else{
    cout<<"poped from stack-1 "<<arr[top1]<<endl;
    top1--;
  }
}

int twoStacks::pop2(){
  if(top2 == mx){
    cout<<"Stack underflow"<<endl;
  }
  else{
    cout<<"poped from stack-1 "<<arr[top2]<<endl;
    top2++;
  }
}

int main(){

  twoStacks ts; 
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    ts.pop1(); 
    ts.push2(40); 
    ts.pop2(); 

  return 0;
}