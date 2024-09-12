#include<iostream>
using namespace std;
int a;
int main(){
    cin>> a;
    int b;
    if (a<20){
         b=a-10;
         cout<<b;}
     else if (a>20 && a<30){
        b=a-20;
        cout<<b;
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                cout<< endl;
            }
            cout<<i;
        }}
    
     else {
        cout<<"wrong input";
    }


    return 0;

    
    
    
    
    
    
}