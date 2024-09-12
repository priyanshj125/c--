#include <iostream>
#include <vector>
using namespace std;
void shortzeroandone(vector<int> &v)
{
    int zeroes_count = 0;
    for (int ele : v)
    {
        if (ele == 0)
        {
            zeroes_count++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < zeroes_count)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
    for (int j = 0; j < v.size(); j++)
    {
        cout<<v[j];
    }
    
}
int main()
{
    vector<int> v;
    cout << "enter the size  of vector ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (right_ptr > left_ptr)
    {
        if (v[right_ptr] % 2 == 0 && v[left_ptr] % 2 == !0)
        {
            int a;
            a=v[right_ptr];
            v[right_ptr] = v[left_ptr];
            v[left_ptr] = a;
        }
        else if (v[right_ptr] % 2 == !0)
        {
            right_ptr++;
        }
        else if (v[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }

    return 0;
}