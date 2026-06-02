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
        ll xorice = 0;
        for(ll i=0; i<n; i++)
        {
            xorice = xorice ^ a[i];
        }
        ll result = 0;
        for(ll i=0; i<n; i++)
        {
            result = result ^ (a[i] ^ xorice);
        }
        if(result > 0) xorice = -1;
        cout<<xorice<<endl;
    }
    return 0;
}
