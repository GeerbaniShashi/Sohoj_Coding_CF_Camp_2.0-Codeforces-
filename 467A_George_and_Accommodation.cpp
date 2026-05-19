#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll p[n], q[n];
    for(ll i=0; i<n; i++)
    {
        cin>>p[i]>>q[i];
    }
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if((q[i] - p[i]) >= 2) count++;
    }
    cout<<count<<endl;
    return 0;
}
