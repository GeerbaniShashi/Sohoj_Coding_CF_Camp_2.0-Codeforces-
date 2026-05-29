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
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        if(st.size() >= 3) cout<<"NO"<<endl;
        else
        {
            map<ll,ll>mp;
            map<ll,ll>::iterator it;
            for(ll i=0; i<n; i++)
            {
                mp[a[i]]++;
            }
            if(abs(mp.begin()->second - mp.rbegin()->second) <= 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
