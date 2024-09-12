#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void f(int *arr,int idex,int n){
    if(idex==n) return;
    cout<<arr[idex]<<endl;
    f(arr,idex+1,n);
}
// delete letter 'a' from string
string newstr(string s,int idx,int n){  
string ans="";
if(idx==n)return "";


//     while(idx<n){
//         s
     if (s[idx]=='a')
        {
         return   newstr(s,idx+1,n);}
        else{
            ans=s[idx] + newstr(s,idx+1,n);
         }

//      else{
//         return s;
//      }   
//     }
return ans;
 }
 //print number upto n digit
 void print_n(int n){
    if (n<1) { return; }
    print_n(n-1);
    cout<<n;
return;

 }
void multiple_p(int n, int k){
 if (k==0)return ;
multiple_p(n,k-1);
cout<<n*k<<endl;
return;
}
int alternatesign_sum(int n){
    //base case
    if(n==0)return 0;
    return alternatesign_sum(n-1)+((n%2==0)?(-n):(n));
}
bool check_arr(int arr[],int x,int n){
if (n>=sizeof(arr)/sizeof(arr[0]))return false;
if (arr[n]==x)return true;
else{
   
    return check_arr(arr,4,n+1);
}}

//print hcf of 2 number{b>a}
//hint hcf of (a,b)=(a,b-a)=(a,a%b)
int hcf_num(int a,int b){
    if (b>a) return hcf_num(b,a);
    if(b==0)return a;
    return hcf_num(b,a%b);
}

 

int main(){
    // int n=5;
    // int arr[]={1,2,3,4,5};
    // f(arr,0,n);
    // string s="priyansh";
    // int n=s.size();
    // int idx=0;
    // cout<<newstr(s,idx,n);
    // print_n(10);
// multiple_p(9,10);
// cout<<alternatesign_sum(11);
// int arr[]={2,3,4,5,7,4};
// if (check_arr(arr,4,0))
// { cout<<"elemnet found";
// }else{  cout<<"element not found";}

cout<<hcf_num(8,4);
    return 0;
}