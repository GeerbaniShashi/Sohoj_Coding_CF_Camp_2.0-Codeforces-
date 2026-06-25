#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    for(ll i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
