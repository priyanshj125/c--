#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        vector<int> a(10,0);
        for (int i = 0; i < 3; i++)
        {
            /* code */
            int z;
            cin>>z;
            a[z]++;
            
        }
        for (int  j = 0; j < 10; j++)
        {
            /* code */
            if(a[j]==1){
                cout<<j<<endl;
                break;
            }
        }
        
        
    }
    return 0;
}