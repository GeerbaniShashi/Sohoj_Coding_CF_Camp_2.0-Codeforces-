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
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ll x = 0;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if((*it).second == 1)
            {
                x = (*it).first;
                break;
            }
        }
        ll index = 0;
        for(ll i=0; i<n; i++)
        {
            if(a[i] == x)
            {
                index = i+1;
                break;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
