#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
  node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
int lengthnode(node* &head){
    int length=0;
    node* temp=head;
    while (temp!=NULL)
    {
        length++;
    temp=temp->next;
    }
    return length;
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
void insertinhead(node* &head,int d){ 
    if(head==NULL){
        node* temp=new node(d);
        head=temp;

    }
   else{ node*temp = new node(d);
    temp->next= head;
    head->prev=temp;
    head=temp;}
}
void deletenode(node* &head,int position){
    if (position==1){
        node* temp=head;
        
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node*curr=head;
        node*prev=NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
      prev->next=curr->next;
      curr->next=NULL;
      delete curr;

    }
    
} 
void insertintail(node* &tail,int d){
    if(tail==NULL){
        node* temp=new node(d);
        tail=temp;
    }
     node* temp=new node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;

}
void insertinpostion(node* &head,node* &tail,int postion,int d ){
    if(postion==1) {insertinhead(head, d);}
    
           node*temp=head;
    int count=1;
    while(count<postion-1){
        temp=temp->next;
        count++;
    }
      if(temp->next==NULL){
        insertintail(tail,d);
        return;
    }

    node* nodetoinscert=new node(d);
    nodetoinscert->next=temp->next;
    temp->next->prev=nodetoinscert;
    temp->next=nodetoinscert;
    nodetoinscert->prev=temp;
    }
  
int main(){

node* node1=new node(10);
node* head=node1;
node* tail=node1;
insertinhead(head,11);
insertinhead(head,145);
cout<<lengthnode(head)<<"is length"<<endl;

print(head);
insertintail(tail,90);
print(head);
insertintail(tail,60);
print(head);
insertintail(tail,780);
print(head);
cout<<lengthnode(head)<<endl;
insertinpostion(head,tail,3,45);
print(head);
deletenode(head,3);
print(head);
cout<<tail->data<<"  ";
cout<<head->data;
    return 0;
}