#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string longest_prefix(vector<string> & str){
sort(str.begin(),str.end()); //ortin the array


string s1=str[0];
string s2=str[str.size()-1];
int i=0;
string ans="";
while (i<s1.length() && i<s2.length())
{
    if (s1[i]==s2[i]){
        ans+=s1[i];
        i++;
    }
    else{ break ;
    }
    
}
return ans;
}




string longestprefix(vector <string> &str){
 string s1=str[0];
 int answerlenth=s1.size();

 for (int i = 0; i < str.size(); i++)
 {

 
 int j=0;
 while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j] )
 {
  j++;
 }
 
 answerlenth=min(answerlenth,j);
 

}


string ans=s1.substr(0,answerlenth);
return ans;
}
int main(){
  int n;
  vector<string> str;
    cout<<"enter number of string";
    cin>>n;
for (int i = 0; i < n; i++)
{ string s;
    cin>>s; 
    str.push_back(s);
}
cout<<longestprefix(str) ;
  return 0;
}