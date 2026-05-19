#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        b[a[i]-1] = i+1;
    }
    for(ll i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
