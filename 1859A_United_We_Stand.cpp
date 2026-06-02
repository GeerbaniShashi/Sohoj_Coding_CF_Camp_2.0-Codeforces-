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
        vector<ll>v;
        set<ll>st;
        ll maximum = INT_MIN;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
            maximum = max(maximum, v[i]);
            st.insert(v[i]);
        }
        vector<ll>v1, v2;
        for(ll i=0; i<n; i++)
        {
            if(v[i] != maximum) v1.push_back(v[i]);
        }
        for(ll i=0; i<n; i++)
        {
            if(v[i] == maximum) v2.push_back(v[i]);
        }
        if(st.size() == 1 || v1.size()== 0 || v2.size() == 0) cout<<"-1"<<endl;
        else
        {
            cout<<v1.size()<<" "<<v2.size()<<endl;
            for(ll i=0; i<v1.size(); i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<endl;
            for(ll i=0; i<v2.size(); i++)
            {
                cout<<v2[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
