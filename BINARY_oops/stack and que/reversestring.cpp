#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string str="priyansh";
    for (int i = 0; i < str.length(); i++)
    { s.push(str[i]);
    }
    string ans="";
    while (!s.empty())
    { char in=s.top();
        ans.push_back(in);
        s.pop();
    }
    cout<<ans;
    
    return 0;
}