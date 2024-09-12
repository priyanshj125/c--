#include<iostream>
using namespace std;
class stack{
    int capacity;
    int arr;
    int top;
    public:
    stack(int c){
        this->capacity=c;
        arr=new int[c];
        this->top =-1
    }
    void push(int data){
        if (this->top=this->capcity-1){
            cout<<"overflow\n";
            return;}
            this->top++;
            this->arr[this->top]=data;
            
    }
    int pop()  {
        if(this->top=-1){
            cout<<"underflow";
            return;
        }
    }      
    
}
int main(){


    return 0;

}