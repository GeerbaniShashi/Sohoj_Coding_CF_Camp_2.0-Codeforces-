#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll sum = a[0], maximum = a[0];
        for(ll i=1; i<n; i++)
        {
            sum = a[i] - a[i-1];
            maximum = max(maximum, sum);
        }
        maximum = max(maximum, 2*(k - a[n-1]));
        cout<<maximum<<endl;
    }
    return 0;
}
