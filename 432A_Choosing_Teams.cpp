#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if((5 - a[i]) >= k) count++;
    }
    cout<<count/3<<endl;
    return 0;
}
