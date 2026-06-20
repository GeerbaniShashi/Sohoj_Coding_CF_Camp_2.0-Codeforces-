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
        ll count = 0;
        for(ll i=0; i<n-1; i++)
        {
            if(__gcd(a[i], a[i+1]) == abs(a[i]-a[i+1])) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
