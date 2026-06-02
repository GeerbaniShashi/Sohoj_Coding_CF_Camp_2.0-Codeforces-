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
        ll a[n], b[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        ll count1 = 0;
        for(ll i=0; i<n; i++)
        {
            if(a[i] == b[i])
            {
                continue;
            }
            else
            {
                count1 = 1;
                break;
            }
        }
        if(count1 == 0 || a[0] == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
