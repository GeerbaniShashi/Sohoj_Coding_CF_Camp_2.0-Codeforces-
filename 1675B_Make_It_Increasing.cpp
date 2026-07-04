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
        ll count = 0;
        bool ok = false;
        for(ll i=n-2; i>=0; i--)
        {
            if(a[i+1] == 0)
            {
                ok = true;
                break;
            }
            while(a[i] >= a[i+1])
            {
                count++;
                a[i]/=2;
            }
        }
        if(ok) cout<<"-1"<<endl;
        else cout<<count<<endl;
    }
    return 0;
}
