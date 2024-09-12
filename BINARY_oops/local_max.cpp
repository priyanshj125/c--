#include<iostream>
#include<vector>
using namespace std;
int find_local_max(vector<int>&a){
    int lo=0;
    int hi=a.size()-1;
    while (hi>lo){
        int mid=lo+(hi-lo)/2;
        if (mid==0){
            if(a[mid]<a[mid+1]) return mid+1;
        else{return mid;}
        }
        if(a[mid]>a[mid-1] and a[mid]<a[mid+1]){
            return mid;
        }
        else if(a[mid]<a[mid-1]){
            hi=mid-1;
        }
        else {
            lo=mid+1;
        }

    }
    
return -1;
}
int main(){
    int n;
    cin>> n;
    vector<int> a(n);
    for (int  i = 0; i < n; i++)
    {
        cin>> a[i];
    }
cout<<find_local_max(a);
    
    return 0;
}