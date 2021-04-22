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

int main(){

  Stack st;
  cout<<"isEmpty = "<<st.isEmpty()<<endl;
  st.pop();
  st.peek();
  st.push(10);
  cout<<"isEmpty = "<<st.isEmpty()<<endl;
  st.peek();
  st.push(20);
  st.push(30);
  st.peek();
  st.push(40);
  st.push(50);
  cout<<"isEmpty = "<<st.isEmpty()<<endl;
  st.pop();
  st.pop();
  st.pop();
  st.peek();
  cout<<"isEmpty = "<<st.isEmpty()<<endl    ;
  st.pop();
  st.peek();
  st.pop();
  st.pop();
  st.peek();
  cout<<"isEmpty = "<<st.isEmpty()<<endl;



  return 0;
}