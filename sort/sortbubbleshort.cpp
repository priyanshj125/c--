#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void swap(int &a,int &b){
int k;
k=b;
b=a;
a=k;
}
void bubbleshort(vector<int> &v){
   int n=v.size();
    for (int i = 0; i <n-1; i++)


    { bool flag=false;
        for (int j = 0; j < n-1-i; j++)
        {
            if (v[j]>v[j+1])
            { flag=true;
                swap(v[j],v[j+1])   ;       }
            
        }
        if (!flag) break;
        
    }
    
}

int main(){
    cout<<"enter size of array";
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    bubbleshort(v);
    for (int k = 0; k < n; k++)
    {
        cout<<v[k]<<"  ";
    }
    

    


  
   
    return 0;
}