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
            ll count1 = 0, count2 = 0;
            for(ll j=i+1; j<n; j++)
            {
                if(a[i] < a[j]) count1++;
                else if(a[i] > a[j]) count2++;
            }
            ll maximum = max(count1, count2);
            v.push_back(maximum);
        }
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
