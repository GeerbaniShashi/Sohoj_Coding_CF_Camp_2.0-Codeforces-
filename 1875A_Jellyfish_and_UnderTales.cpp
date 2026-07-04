#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, n;
        cin>>a>>b>>n;
        ll x[n];
        for(ll i=0; i<n; i++)
        {
            cin>>x[i];
        }
        ll sum = b;
        for(ll i=0; i<n; i++)
        {
            sum += min(x[i], a-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
