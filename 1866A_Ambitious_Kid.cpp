#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll count0 = 0, count1 = 0, count2 = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == 0) count0++;
        if(a[i] > 0) count1++;
        if(a[i] < 0) count2++;
    }
    sort(a, a+n);
    ll x = 0, y = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
            x = abs(a[i]);
        }
    }
    for(ll i=0; i<n; i++)
    {
        if(a[i] > 0)
        {
            y = abs(a[i]);
            break;
        }
    }
    if(count0 > 0) cout<<0<<endl;
    else if(count1 == n) cout<<y<<endl;
    else if(count2 == n) cout<<x<<endl;
    else cout<<min(x, y)<<endl;

    return 0;
}
