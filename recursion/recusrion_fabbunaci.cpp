#include<iostream>
using namespace std;
fabona(int n){
    if (n==1 || n==2)
    {
        return 1;
    }
    int ans;
    ans = fabona(n-1)+fabona(n-2);
    return ans;
}
sumof_digit(int n)
{
// if (n==0)
// {
//     /* code */
// }

    int ans;
    ans=n%10+sumof_digit(n/10);
    return ans;
    }
    

int main(){
cout<<"enter value of n";
int n;
cin>>n;
// cout<<fabona(n);
cout<<sumof_digit(n);

    return 0;
}