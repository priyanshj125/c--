#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int f(int *arr,int n,int i){
     if (i==n) return 0;
 if(i==n-1)return f(arr,n,i+1);
 return min(f(arr,n,i+1)+abs(arr[i]-arr[i+1]),f(arr,n,i+2)+abs(arr[i]-arr[i+2]));
     

}
int main(){
    int arr[]={20,40,60,80}; 
  int n= sizeof(arr)/sizeof(arr[0]);
  cout<<f(arr,n,0);
   
    return 0;
}