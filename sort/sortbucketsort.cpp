#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketsort(float a[],int size){
    vector<vector<float>> bucket(size,vector<float>());
    //insert element into busket
    for (int i = 0; i < size; i++)
    {
        int index=a[i]*size;
        bucket[index].push_back(a[i]);}
        //sorting
        for (int i = 0; i < size; i++)
        {if (!bucket[i].empty()){
              sort(bucket[i].begin(),bucket[i].end()); }
        }
        //combining element form bucket
        int k=0;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < bucket[i].size(); j++)
            {
                a[k++]=bucket[i][j]; 
            }}    }
int main(){
    float a[]={0.12,0.23,0.21,0.24,0.45,0.56,0.43};
    int size=sizeof(a)/sizeof(a[0]);
    
    bucketsort(a,size);
    for (int i = 0; i < size; i++)
    {
    cout<<a[i]<<"    ";
    }
    



    return 0;
}

