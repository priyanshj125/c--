#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=k;
        int count=0;
        int x;
        for (int i = 0; i <n; i++)
        {
            cin>>x;
            if(x%2==0)count++;
            ans=min(ans,k-x%k);
        }
        if(k==4){
            if (count==1)
            {
                ans=min(1,ans);
            }
            if(count==2){
                ans=0;
            }
            if(count==0){
                ans=min(2,ans);
            }
            
        }
        cout<< ans<<"is your ans";
        
    }

    return 0;
}