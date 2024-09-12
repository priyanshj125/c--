#include<bits/stdc++.h>
using namespace std;


int countTwo(int n) {
    int c = 0;
    while(n%2 == 0) {
        c++;
        n = n/2;
    }

    return c;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);

        for (int i=0; i<n; i++) {
            cin>>v[i];
        }

// 5 2
// 9 7 7 3 9
        int tc = 0;
        int ans = k;
        for (int i=0; i<n; i++) {

            int remain = INT_MAX;
            int x = v[i];

            if (x%k==0) {
                ans = 0;
                break;
            }
            
            tc += countTwo(v[i]);
            if(((k == 2)&&(tc > 0)) || ((k == 4)&&(tc > 1))) {
                ans = 0;
                break;
            }

            remain = min(remain, k - x%k);
            ans = min(ans, remain);
        }

        cout<<ans<<"\n";
    }

    return 0;
}