// //decode 2[b]=bb and2[b3[c]]=bcccbccc

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// string decoded(string s){
//     string result="";
// for (int i = 0; i < s.length(); i++){
//     // string result="";

//     if (s[i]!=']')
//     {
// result.push_back(s[i]);
//     }
// else{
 
//  string str="";
//  while (!result.empty() && result.back()!='[')
//  { 
//  str.push_back(result.back());

//  }
//  result.pop_back();
//  reverse(str.begin(),str.end());
//  string num="";
//  while ((result.back()>='0' && result.back()<='9' )&& !result.empty()){
//  num.push_back(result.back());
//  result.pop_back(); 

    
//  }
//  reverse(num.begin(),num.end());
//  int int_num=stoi(num);
// while (int_num)
// {result+=str;
// int_num--;
    
// }



 
    
// }
    
// }
// return result;


// }


// int main(){
//     string str;
//     cout<<"enter the string";
//     cin>>str;
//     cout<<decoded(str);  
//     return 0;
//     }




#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decoded(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ']') {
            result.push_back(s[i]);
        } else {
            string str = "";
            while (!result.empty() && result.back() != '[') {
                str.push_back(result.back());
                result.pop_back();
            }
            reverse(str.begin(), str.end());
            
            result.pop_back(); // Remove '['
            
            string num = "";
            while (!result.empty() && result.back() >= '0' && result.back() <= '9') {
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num.begin(), num.end());
            
            int int_num = stoi(num);
            while (int_num) {
                result += str;
                int_num--;
            }
        }
    }
    return result;
}