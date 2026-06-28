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
    sort(a, a+n);
    ll sum = 0;
    for(ll i=0; i<k; i++)
    {
        if(a[i] < 0) sum += abs(a[i]);
    }
    cout<<sum<<endl;
    return 0;
}
