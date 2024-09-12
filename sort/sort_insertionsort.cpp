#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int>&v){
    
    int n=v.size();
    for (int i = 1; i <n ; i++){
        int j=i-1;
        int current=v[j+1];
     while(j>=i-1 && v[j]>v[j+1]){
v[j+1]=v[j];
j--;
} v[j]=current;}
}
int main(){
int n;
cin>>n;
vector<int> v(n);

for (int i = 0; i < n; i++)
{
  cin>>v[i];

}
insertion(v);
cout<<"this  is now";

for (int k= 0; k < n; k++)
{
    cout<<v[k]<<endl;
}




    return 0;
}