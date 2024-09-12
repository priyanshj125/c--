#include<iostream>
#include<vector>
using namespace std;
int fristoccurence(vector<int> &a,int target){
    int ans=-1;
    int lo=0;
    int hi=a.size()-1;
    while (hi>lo)    {
        int mid=(hi+lo)/2;
        if (a[mid]>target){
            hi=mid-1;
        }
        if (a[mid]<target){
            lo=mid+1;
        }
        if (a[mid]==target){
            ans=mid;
            hi=mid-1;
        }
       
    }
    return ans; 
}
int lastoccurence(vector<int> &a,int target){
    int ans=-1;
    int lo=0;
    int hi=a.size()-1;
    while (hi>lo)    {
        int mid=(hi+lo)/2;
        if (a[mid]>target){
            hi=mid-1;
        }
        if (a[mid]<target){
            lo=mid+1;
        }
        if (a[mid]==target){
            ans=mid;
            lo=mid+1;
        }
       
    }
    return ans; 
}
int main(){ 
int n;
cin>>n;
vector<int>a(n);

for (int i = 0; i < n; i++){
    cin>>a[i];
}
int k,o;
k=fristoccurence(a,4);
o=lastoccurence(a,4);
  cout<<k<<endl;
  cout<<o;
    return 0;

}
