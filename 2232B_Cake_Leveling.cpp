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
        ll sum = 0, minimum = INT_MAX;
        for(ll i=0; i<n; i++)
        {
            sum += a[i];
            ll avg = sum / (i+1);
            minimum = min(minimum, avg);
            v.push_back(minimum);
        }
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
