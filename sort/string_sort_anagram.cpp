#include <iostream>
#include<string>
#include <algorithm>
#include <vector>
using namespace std;


string sort_string(string str){
vector <int> freq(26,0);
// add chareter in vector
for (int i = 0; i < str.length(); i++)
{
    int index=str[i]-'a';
    freq[index]++; 
}
int j=0;
for (int  i = 0; i < 26; i++)
{
    while (freq[i]>0)
    {
    freq[i]--;
    str[j]=i+'a';
    j++;
    }}return str;}



// anagram code same letter same count words
    bool isanagram(string str1,string str2){
vector<int> freq(26,0);
if (str1.length()!= str2.length())
{return false;
}

for (int i = 0; i < str1.length(); i++)
{
    int index=str1[i]-'a';
    int index1=str2[i]-'a';
    freq[index]++;
freq[index1]--;
    }
    for (int i = 0; i <26 ; i++) 
    if (freq[i]!= 0)
    {
       return false; 
    }
    return true;
    }
    
    

int main(){
string str="hello";
reverse(str.begin(),str.end());
string sub=str.substr(1,3);
// reverse
string str1;
string str2;

cout<<str<<endl;
cout<<sub<<endl;
cout<<"<enter 1st string";
cin>>str1;
cout<<"enter 2nd string";
cin>>  str2;
// cout<< sort_string("priyanshjain");
// cout<<isanagram(str1,str2);
if (isanagram(str1,str2))
{
    cout<<"they are anagram /n";
}
else{ cout<<"they are not anangram /n ";}

    return 0;
}