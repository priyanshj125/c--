#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
     node(int d){
        this->data=d;
        this->next=NULL; 
     }
    ~node(){
        int value=this->data;
        if(this->next !=    NULL){
            delete next;
            next=NULL;
        }
        cout<<"MEMORY IS FREE"<<value<<endl;
    }
};
void insertnode(node* &tail,int element,int d){
    //assuiming that the element is present in the list
    if(tail==NULL){
        //empty list
        node* newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(node*tail){
    node*temp=tail;
  
    temp=tail->next;
    do{
        cout<<tail->data<<" ";
    tail=tail->next;}while(tail!=temp);
    

}
vool iscircularlist(node*head){
    if(head==NULL)return NULL;
    node*temp=head->next;
    while(temp!=NULL and temp!=head){
        temp=temp->next;
    }
    if(temp==head){
     return true;
    }
    return fals
}

int main(){
    node*tail=  NULL;
insertnode(tail,5,3);
print(tail);
insertnode(tail,3,5);
print(tail);
insertnode(tail,7,10);
print(tail);
insertnode(tail,10,7);
print(tail);







    return 0;
}