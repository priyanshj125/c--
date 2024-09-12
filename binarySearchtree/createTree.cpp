#include <iostream>
#include <queue>
using namespace std;
class Node{
     public:
     Node*left;
     Node*right;
     int data;
     Node(int d){
        this->right=NULL;
        this->left=NULL;
        this->data=d;
     }
};
void levelOrderTrasversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        Node* temp=q.front();
        q.pop();
        if (temp==NULL){
            cout<<endl;
            if (!q.empty()){
            q.push(NULL);
            }
        }
        else{  
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
             }
        if  (temp->right) {
               q.push(temp->right);
        }
        
        }
    }
    
}


Node* createinsert(Node*root,int insert){
    if(root==NULL){
        Node* root=new Node(insert);
        return root;
    }
    if(root->data>insert){
        root->right=createinsert(root->right,insert);
    }
    if(root->data<insert){
        root->left=createinsert(root->left,insert);
    }
    return root;

}
void takeinput(Node* & root){
    int data;
    cout<<"enter the data";
    cin>>data;
    while(data!=-1){
        root=createinsert(root,data);
        cin>>data;
    }
}
int main(){
    //  int insert;
    //  Node* root=new Node;
    cout<<"start insert into root"<<endl;  
    Node* root=NULL;
    takeinput(root);
    levelOrderTrasversal(root);
    return 0;
}