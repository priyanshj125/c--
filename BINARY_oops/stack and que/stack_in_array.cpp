#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class stack{
public:
int *arr;
int size;
int top;
stack (int size){
    this->size=size;
    arr=new int [size];
    top=-1;
}
void push(int element){
    if ((size-top>1))
    { top++;
        arr[top]=element;
    }
    else{
cout<<"stack is overflow";
 }   
}
void pop(){
    if(top>-1){
        top--;
    }
}
void peek(){
if (top!=-1){
    cout<<"top element is "<<arr[top];
    }

else{
        cout<<"condition of over flow";
    }
}
};
 
int main(){
    stack str(5);
    str.push(1);
    str.push(145);
    str.push(56);
    str.peek();
    cout<<endl;
    str.pop();
    str.peek();
    
  
   cout<<"hello";
    return 0;
}