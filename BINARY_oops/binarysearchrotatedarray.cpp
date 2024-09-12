#include<iostream>
#include<vector>
using namespace std;
int binaryseachrotatedarray(vector<int>&a,int target){
    int lo=0;
    int hi=a.size()-1;

    
    
    while (hi>=lo){
    int mid =lo+(hi-lo)/2;
    if (a[mid]==target) return mid;
     if (a[mid]>=a[lo]){
    if(target>=a[lo] and target<=a[mid]){hi=mid-1;}
    else{lo=mid+1;}
    }
    else{
        if (target>a[mid] and target<a[hi])
        {
            lo =mid+1;
        }
        else{hi=mid-1;}
        
    }
    }
    
    return -1;}
 int binaryseachrepeatedrotatedarray(vector<int>&a,int target){
    int lo=0;
    int hi=a.size()-1;
    if(a[lo]==target)return 1;
    if(hi==lo){lo++;
    hi--;}
    while (hi>=lo){
    int mid =lo+(hi-lo)/2;
    if (a[mid]==target) return 1;
     if (a[mid]>=a[lo]){
    if(target>=a[lo] and target<=a[mid]){hi=mid-1;}
    else{lo=mid+1;}
    }
    else{
        if (target>a[mid] and target<a[hi])
        {
            lo =mid+1;
        }
        else{hi=mid-1;}
        
    }
    }
    
    return 0;}   

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<binaryseachrotatedarray(a,4)<<endl;
    cout<<binaryseachrepeatedrotatedarray(a,2);
    
    return 0;
}
