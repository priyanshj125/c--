#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;
void add_bottom(stack<int> &s,int n){
          if (s.empty())
          {
            s.push(n);
            return;
          }
          int num=s.top();
          s.pop();
          add_bottom(s,n);
          s.push(num);
          
}
void print_stack(stack<int> s){
    if(s.empty()){
    return;     
    }
    int nu=s.top();
    cout<<nu<<" ";
    s.pop();
    print_stack(s);
    

}
int main(){
    stack <int> s;

s.push(8);
s.push(7);
s.push(6);
s.push(5);
print_stack(s);
cout<<"enter num want to add in buttom of stack";
int n;
cin>> n;
add_bottom(s,n);
cout<< "new stack is";
print_stack(s);



    return 0;
}