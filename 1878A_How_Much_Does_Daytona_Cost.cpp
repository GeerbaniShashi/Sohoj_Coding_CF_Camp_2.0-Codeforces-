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
        ll count = 0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]==k)
            {
                count = 1;
                break;
            }
        }
        if(count == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
