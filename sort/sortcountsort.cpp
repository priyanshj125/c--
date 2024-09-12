// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// void countsort(vector<int> &a) {
//     int n = a.size();
//     int max = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         if (a[i] > max) {
//             max = a[i];
//         }
//     }

//     vector<int> freq(max + 1, 0);

//     for (int i = 0; i < max; i++) {
//         freq[a[i]]++;
//     }

//     for (int i = 1; i <= max; i++) {
//         freq[i] += freq[i - 1];
//     }

//     vector<int> ans(n);
//     for (int i = 0; i < n; i++) {
//         int index = freq[a[i]] - 1;
//         ans[index] = a[i];
//         freq[a[i]]--;
//     }

//     for (int i = 0; i < n; i++) {
//         a[i] = ans[i];
//     }
// }

// int main() {
//     cout << "Enter size of arr: ";
//     int n;
//     cin >> n;

//     vector<int> a(n);

//     cout << "Enter elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     countsort(a);

//     cout << "Sorted array:" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << endl;
//     }

//     return 0;
// }


 // redix sort
 #include<stdio.h>
 
