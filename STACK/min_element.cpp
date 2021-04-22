#include <iostream>
using namespace std;

class node{
public:
  int data;
  node * next;
};

class Stack{
  node * start;
public:
  Stack(){
    start = NULL;
  }
  void push(int x);
  int pop();
  int peek();
  bool isEmpty();
};

void Stack::push(int x){
  node *ptr = new node();
  ptr->data = x;
  if(start == NULL){
    ptr->next = NULL;
    start = ptr;
    cout<<"pushed into stack "<<x<<endl;
  }
  else{
    ptr->next = start;
    start = ptr;
    cout<<"pushed into stack "<<x<<endl;
  }
}

int Stack::pop(){
  if(start == NULL){
    cout<<"Stack is empty "<<endl;
  }
  else{
    node * temp = start;
    start = start->next;
    cout<<"poped form stack"<<temp->data<<endl;
    int dt = temp->data;
    free(temp);
    return dt;
  }
}

int Stack::peek(){
  if(start == NULL){
    cout<<"Stack is empty "<<endl;
  }
  else{
    cout<<"top of stack "<<start->data<<endl;
    return start->data;
  }
}

bool Stack::isEmpty(){
  return (start == NULL);
}

class specialStack : public Stack{
private:
  Stack min;
public:
  int pop();
  void push(int x);
  int getMin();
};

void specialStack::push(int x){
  if(isEmpty() == true){
    Stack::push(x);
    min.push(x);
  }
  else{
    int y = min.pop();
    min.push(y);
    if(x<y){
      min.push(x);
    }
    else{
      min.push(y);
    }
  }
}

int specialStack::pop(){
  int x = Stack::pop();
  min.pop();
  return x;
} 

int specialStack::getMin(){
  int x = min.pop();
  min.push(x);
  return x;
}

int main(){
    specialStack s; 
    s.push(30);
    cout << s.getMin() << endl;
    s.push(20);
    cout << s.getMin() << endl;
    s.push(10);
    cout << s.getMin() << endl;
    s.push(5);
    cout << s.getMin();
  return 0;
}