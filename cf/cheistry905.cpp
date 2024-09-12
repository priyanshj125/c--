#include<iostream>
#include<vector>
using namespace std;
/// @brief 
/// @return 
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int k;
        int n;
        cin>>n>>k;
        int count=0;
        cin>>s;
       
        vector<int> arr(26,0);
        for (int  i = 0; i < n; i++)
        { int temp=s[i]-'a';
            arr[temp]++;
        }
        for (int i = 0; i < 26; i++)
        { 
            if(arr[i]%2!=0){
                count++;
            }
        }
        if (k>=count)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        


    }
    return 0;
 
}