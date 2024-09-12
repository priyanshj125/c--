#include<iostream>
#include<vector>

using namespace std;
int  main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int k;
        int count=0;
        cin>>s;
        cin>>k;
        vector<int> arr(26,0);
        for (int  i = 0; i < s.length(); i++)
        { int temp=s[i]-'a';
            arr[temp]++;
        }
        for (int i = 0; i < 26; i++)
        { 
            if(arr[i]%2!=0){
                count++;
            }
        }
        if (k==count)
        {
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        


    }
    return 0;
 
}