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
        for(ll i=0; i<n; i++)
        {
            if(a[i] <= a[i+1])
            {
                v.push_back(a[i]);
            }
            else
            {
                v.push_back(a[i]);
                v.push_back(a[i+1]);
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
