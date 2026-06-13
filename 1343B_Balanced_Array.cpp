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
        ll x = n / 2;
        if(x % 2 == 1) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            vector<ll>v1, v2;
            ll sum1 = 0, sum2 = 0;
            for(ll i=2; i<=n; i+=2)
            {
                v1.push_back(i);
            }
            for(ll i=1; i<n-1; i+=2)
            {
                v2.push_back(i);
            }
            for(ll i=1; i<v1.size(); i++)
            {
                sum1 += v1[i];
            }
            for(ll i=1; i<v2.size(); i++)
            {
                sum2 += v2[i];
            }
            ll x = sum1 - sum2 + 1;
            v2.push_back(x);
            for(ll i=0; i<v1.size(); i++)
            {
                cout<<v1[i]<<" ";
            }
            for(ll i=0; i<v2.size(); i++)
            {
                cout<<v2[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
