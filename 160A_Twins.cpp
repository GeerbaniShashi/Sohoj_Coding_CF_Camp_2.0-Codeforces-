#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll sum1 = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        sum1 += a[i];
    }
    sort(a, a+n, greater<ll>());
    ll avg = sum1 / 2;
    ll count = 0;
    ll sum2 = 0;
    for(ll i=0; i<n; i++)
    {
        sum2 += a[i];
        if(sum2 <= avg)
        {
            count++;
        }
        else
        {
            count++;
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
