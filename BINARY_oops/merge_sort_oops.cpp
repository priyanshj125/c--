#include<iostream>
#include <map>
using namespace std;
class node{
    public:
    int data;
    node*next=NULL;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void node_merge(){|

  if(first==NULL){return second ;}
    if(second==NULL){return first;}
    Node<int>* ans=new Node<int>(-1);
    Node<int>* temp=ans;
    while(first!=NULL and second!=NULL){
        if(first->data>second->data){
            temp->next=second;
            temp=second;
           second=second->next;
        }
        else{
            temp->next=first;
          temp=first;
            first=first->next;
        }

    }
    while (first!=NULL){
        temp->next=first;
        temp=first;
        first=first->next;

    }
    while(second!=NULL){
        temp->next=second;
         temp=second;
           second=second->next;
    }
ans=ans->next;
return ans;
}

int main(){
    return 0;
}