#include<iostream>
using namespace std;
//constructor 
class node{
    public:
    int data;
    node* next;
    node(int data){
        this ->data=data;
        this-> next=NULL; 
    }};
void insertinhead(node* &head,int d){
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
void insertintail(node*& tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp=tail;
}
void deletenode(node* &head,int position){
    if (position==1){
        node* temp=head;
        head=head->next;
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
      prev->next=curr->next;
      curr->next=NULL;
      delete curr;

    }
    
}

void print(node* &head){
        node* temp= head;
        while (temp!=NULL)
        {
        cout<<temp->data<<" ";
        temp=temp->next;
        }
        
    }
void insertatposition(node* &head,int postion,int d){
    node*temp=head;
    int count=1;
    while(count<postion-1){
        temp=temp->next;
        count++;
    }
    node* nodetoinscert=new node(d);
    nodetoinscert->next=temp->next;
    temp->next=nodetoinscert;
    
}
class priyansh{
    public:
    int enrollment;
    priyansh(int x){
        cout<<"this is call";
        enrollment=10;
    }
};
int main(){
   
  node* node1=new node(5);
//  node* tail=node1;
//  insertintail(tail,10);
  node* head=node1;
  insertinhead(head,12);
   insertatposition(head,2,3);
  print(head);
  cout<<endl;
//   cout<<node1->data<<endl;
//   cout<<node1->next<<endl;
deletenode(head,2);
print(head);
cout<<endl;
    return 0;
}