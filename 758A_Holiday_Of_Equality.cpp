#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll maximum = INT_MIN;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        maximum = max(maximum, a[i]);
    }
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] == maximum) continue;
        else sum += (maximum - a[i]);
    }
    cout<<sum<<endl;
    return 0;
}
