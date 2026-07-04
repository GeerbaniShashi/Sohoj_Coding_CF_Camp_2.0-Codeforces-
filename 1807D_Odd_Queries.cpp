#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n];
        ll sum = 0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll prefix[n];
        prefix[0] = a[0];
        for(ll i=1; i<n; i++)
        {
            prefix[i]= prefix[i-1]+a[i];
        }
        while(q--)
        {
            ll l, r, k;
            cin>>l>>r>>k;
            ll sum1 = prefix[r-1]-(prefix[l-1]-a[l-1]);
            ll sum2 = sum - sum1 + (r-l+1)*k;
            if(sum2%2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}
