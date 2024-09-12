#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

#define mod 998244353


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
    ll ans=100;
    if(k==2)
    {
        for(auto it:v)
        {
            ans=min(ans,2-it%2);
            if(it%2==0) ans=0;
        }
        cout<<ans<<endl;
    }
    if(k==4)
    {
            ll cnt_multiple_of2=0;
            for(auto it:v)
            {
                if(it%4==0)
                {
                    ans=0;
                    break;
                }
                ans=min(ans,4-it%4);
                if(it%2==0) cnt_multiple_of2++;
            }
            if(ans==0 || cnt_multiple_of2>1)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<min(ans,2-cnt_multiple_of2)<<endl;
            }
    }
    if(k==5)
    {
        for(auto it:v)
        {
            ans=min(ans,5-it%5);
            if(it%5==0) ans=0;
        }
        cout<<ans<<endl;
    }
    if(k==3)
    {
        for(auto it:v)
        {
            ans=min(ans,3-it%3);
            if(it%3==0) ans=0;
        }
        cout<<ans<<endl;
    }

}
return 0;
}
