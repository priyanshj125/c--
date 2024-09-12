 
    
  #include<iostream>
#include<vector>
using namespace std;
// 
void sort(vector<int> &v){
    int n=v.size();
    for (int i = 0; i < n-1; i++){
       int idx_min=i;
        for (int j = i+1; j < n; j++){
            if (v[j]<v[idx_min]){
             idx_min=j;
            }
        }

        
        if (idx_min!=i)
        {
            swap(v[idx_min],v[i]);
        }
    }

        
    
    }
    
    

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v);
    for (int k = 0; k < n; k++)
    {
       cout<<v[k]<<"   ";
    }
    
    return 0;
}