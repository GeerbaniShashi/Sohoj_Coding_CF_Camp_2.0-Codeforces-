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
        ll ok = 0;
        for(ll i=0; i<n-1; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                if(__gcd(a[i], a[j]) <= 2)
                {
                    ok = 1;
                    break;
                }
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
