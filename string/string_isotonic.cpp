#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool isotonic(string str1, string str2){
    if (str1.length()!=str2.length()){ 
        return false;
    }
    vector<int> v1(126,-1);
    vector<int> v2(126,-1);
    for (int i = 0; i < str1.length(); i++)
    { if (v1[str1[i]]!=v2[str2[i]] )
    {return false; }
    v1[str1[i]]=v2[str2[i]]=i;     
    }
    return true;
}
int main(){
    string str1,str2;
cout<<"enter the s1 and s2";
cin>> str1>> str2;
if (isotonic(str1,str2))
{    cout<<"they are isotonic";}
else cout<<"they are not isotonic";
   return 0;
}