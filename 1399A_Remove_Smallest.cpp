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
        sort(a, a+n);
        ll count = 0;
        for(ll i=0; i<n-1; i++)
        {
            if(a[i+1] - a[i] <= 1) continue;
            else
            {
                count = 1;
                break;
            }
        }
        if(count == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
