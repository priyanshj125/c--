#include<iostream>
#include<vector>
using namespace std;
void sortzerolast(vector<int> &v){
  int n=v.size();
    for (int i = n-1; i >=0; i--)
    {int j=0;
        while (j!=i){
        if (v[j]==0 && v[j+1]!=0){
          swap(v[j],v[j+1]);
        }j++;
        
            
        }
        
    }
    
}
int main(){
    int n;
    cin>>n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  sortzerolast(v);
  for (int i = 0; i < n; i++)
  {
    cout<<v[i]<<endl;
  }
  
  
    return 0;
}
