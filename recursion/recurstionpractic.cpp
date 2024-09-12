#include<iostream>
#include<stdio.h>
using namespace std;
int fabona(int n){
    if (n==1 || n==2)
    {
        return 1;
    }
    int ans;
    ans = fabona(n-1)+fabona(n-2);
    return ans;
}
int sumof_digit(int n){

if (n==0)
{
    return 0;
}

    int ans;
    ans=n%10+sumof_digit(n/10);
    return ans;}
    
int pow1(int p,int q){
     if (q==0){ return 1;}
     q--;
     
     int ans=p;
     ans=pow1(p,q)*p   ;

    return ans;
     
}    
int pow(int p,int q){
    //more effecint
    if (q==0) return 1;
    if(q%2==0){
        int result = pow(p,q/2);
        return result*result; 
    }
    else{
        int result=pow(p,(q-1)/2);
        return p*result*result;
    }
    


}
// bool f(int num,int *temp){
    
// }
int armstrong(int n,int d){
 if(n==0)return 0;
 return pow(n%10,d)+ armstrong(n/10,d);
}

int main(){
cout<<"enter value of n";
int n;
cin>>n;
// cout<<fabona(n);
// cout<<sumof_digit(n);
// cout<<pow(2,8);
//check number is arnstrong or ot(153=1^3+5^3+3^3)
int no_of_digits=0;
int temp=n;
while (temp>0)
{
   temp=temp/10;
   no_of_digits++;
}
if(armstrong(n,no_of_digits)==n){cout<<"number is anstrong";}
else{ cout<<"nuimber is not anstrong";}
    return 0;
}