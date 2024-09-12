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


void insertinhead(node* &head,int d){
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
void insertAtTail(node*& tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp=tail;
}
void print(node*&head){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
    temp->next=nodetoinscert;
    }
void deletenode(int postion,node* &head){
    if(postion==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* curr =head;
        node*prev=NULL;
        int count=1;
        while(count<postion){
            prev=curr;
            curr=curr->next;
            count++;
        }
    }
}
node* floydDetectLoop(node*&head){
    node*fast= head;
    node* slow= head;
    int cnt=0;
    while(fast!=NULL and slow!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    if(slow==fast){
        cout<<"present at"<<slow->data;
        return slow;
    }
    return NULL;
}
bool iscircularlist(node*head){
    if(head==NULL)return NULL;
    node*temp=head->next;
    while(temp!=NULL and temp!=head){
        temp=temp->next;
    }
    if(temp==head){
     return true;
    }
    return false;
}

bool dectectloop(node*head){
     if(head==NULL)return false;
     map<node* temp,bool> visited;
     node* temp=head;
     while(temp!=NULL){
      if(visited[temp]==true){
        cout<<"present loop on ele "<<temp->data<<endl;
        return true;
     }
    visited[temp]=true;
    temp=temp->next;
    }
return false;

}

int main(){
    node * node1;
    node* head = node1; 
    node* tail = node1;
    print(head);
    //print(head);

    insertAtTail(tail, 12);

    print(head);
    //print(head);

    insertAtTail(tail, 15);
    print(head);
    //print(head);

    // insertAtPosition(tail,head, 4, 22);
    // print(head);    
    //print(head);    

    //cout << "head " << head -> data << endl;
    //cout << "tail " << tail -> data << endl;

    //deleteNode(4, head);


    tail -> next = head ->next;

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    //print(head);

    deletenode(4, head);
    if(floydDetectLoop(head) != NULL) {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    return 0;
}