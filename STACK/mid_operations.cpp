#include <bits/stdc++.h>
using namespace std;

class dllNode{
public:
  int data;
  dllNode *nxt;
  dllNode *prv;

  dllNode(int x){
    this->data = x;
    this->nxt = NULL;
    this->prv = NULL;
  }
};

class Stack{
public:
  dllNode *head;
  dllNode *mid;
  int cnt;

  Stack(){
    cnt=0;
    this->head = NULL;
    this->mid = NULL;
  }

  void push(int x);
  void pop();
  void top();
  void findmid();
  void del_mid();

};

void Stack::push(int x){
  //insert at beginning
  dllNode *ptr;
  ptr = new dllNode(x);
  cnt++;
  if(head == NULL){
    head = ptr;
    mid = ptr;
  }else{
    ptr->nxt = head;
    head->prv = ptr;
    head = ptr;
    if(cnt%2 == 0){
      mid = mid->nxt;
    }
  }
  cout<<"pushed int stack : "<<x<<endl;
}

void Stack::pop(){
  if(head == NULL){
    cout<<"Stack is empty"<<endl;
    return;
  }
  cnt--;
  dllNode * temp;
  
  temp = head;
  head = head->nxt;
  head->prv = NULL;

  if(cnt%2 != 0){
    mid = mid->prv;
  }

  cout<<"pooped from stack :"<<temp->data<<endl;
  free(temp);

}

void Stack::findmid(){
  if(mid == NULL){
    cout<<"stack is empty"<<endl;
    return;
  }
  cout<<"middle element is : "<<mid->data<<endl;
}

void Stack::del_mid(){
  if(mid == NULL){
    cout<<"stack is empty"<<endl;
    return;
  }
  cnt--;
  dllNode * temp;
  mid->prv->nxt = mid->nxt;
  mid->nxt->prv = mid->prv;
  temp = mid;

  if(cnt%2 == 0){
    mid = temp->nxt;
  }
  else{
    mid = temp->prv;
  }
  
  cout<<"deleted from stack :"<<temp->data<<endl;
  free(temp);
}

int main(){


  return 0;
}