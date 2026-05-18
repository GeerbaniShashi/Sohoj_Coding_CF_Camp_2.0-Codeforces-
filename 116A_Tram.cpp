#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    ll passenger = 0;
    ll maximum = INT_MIN;
    for(ll i=0; i<n; i++)
    {
        passenger -= a[i];
        passenger += b[i];
        maximum = max(maximum, passenger);
    }
    cout<<maximum<<endl;
    return 0;
}

