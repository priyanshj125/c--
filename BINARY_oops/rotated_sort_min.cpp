#include<iostream>
#include<vector>
using namespace std;
int find_min_elementroteatedarr(vector<int>&a){
    int lo=0;
    int hi=a.size()-1;
    if (a.size()==1) return 0;
  
       
    
    while (hi>=lo){
        int mid;
        mid=(lo+hi)/2;
        if (a[mid]>a[mid+1]) return mid+1;
        if (a[mid]<a[mid-1] )return mid;
        
        if (a[mid]>a[lo]){
            lo=mid+1;
        }
        if(a[mid]<=a[lo]){
            hi=mid-1;
        }
        
    }
    
    return -1;
}
int main(){ 
int n;
cin>>n;
vector<int>a(n);
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}

cout<<find_min_elementroteatedarr(a)  ;
  return 0;

}
