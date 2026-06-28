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
        ll length = 1;
        sort(a, a+n);
        ll maximum = 0;
        for(ll i=0; i<n-1; i++)
        {
            if(a[i+1] - a[i] <= k)
            {
                length++;
            }
            else
            {
                maximum = max(maximum, length);
                length = 1;
            }
        }
        maximum = max(maximum, length);
        cout<<(n-maximum)<<endl;
    }
    return 0;
}
