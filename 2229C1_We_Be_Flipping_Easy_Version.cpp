#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<ll>v;
        bool ok = false;
        for(ll i=n-1; i>=0; i--)
        {
            ll x = a[i];
            if(ok)
            {
                x = -x;
            }
            if(x > 0)
            {
                v.push_back(i+1);
                ok = !ok;
            }
        }
        cout<<v.size()<<endl;
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
