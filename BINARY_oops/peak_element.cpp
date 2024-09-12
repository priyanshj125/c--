#include<iostream>
#include<vector>
using namespace std;
int peak_element(vector<int> &a ){
    int ans=-1;
    int lo=0; int hi=a.size()-1;
    while (hi>lo){
        int mid=lo+(hi+lo)/2;

        if (a[mid-1]<a[mid]){
        // inc line 
        ans =mid;
        lo=mid+1;
        }
        if (a[mid-1]>a[mid]){
    //dec line
    ans=mid-1;
    hi=mid-1;
    
        }
        lo++;
        hi--;
        
        
        
    }
    return ans;
}
int main(){
    int n;
    cin>> n;

    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
 cout<<peak_element(a);
   return 0;
}
