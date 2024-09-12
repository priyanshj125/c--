#include<iostream>
using namespace std;
// void find(int n,int time){
//     if(n%10==n) {
//         time=time+(n-1);
//         cout<<"this is call"<<endl;
//         return ;
//     }
//       int a=n%10;
//     int b=(n/10)%100;
 
//     if(a==0){a=10;}
//     if(b==0){b=10;}
  
//     time=time+(b-a);
//     cout<<"time add"<<time<<endl;
//     find( n/10,time);
    
//     cout<< "time is"<<time;
    
    
// }
int main(){
    cout<<"enter the code";
    int n;
    cin>>n;
    while(n--){
    int time=4;
    //  find(n,time);
    string s;
    char ch=1;
    cin>>s;
    for(char h:s){
        time=time+abs(h-ch);
        ch=h;
    }
    cout<<time;
    return 0;
}}
  
