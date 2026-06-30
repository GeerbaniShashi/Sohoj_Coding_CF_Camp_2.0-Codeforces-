#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll k;
    cin>>k;
    ll a[12];
    for(ll i=0; i<12; i++)
    {
        cin>>a[i];
    }
    sort(a, a+12, greater<ll>());
    ll sum = 0, count = 0;
    for(ll i=0; i<12; i++)
    {
        sum+=a[i];
        if(sum < k) count++;
        else
        {
            count++;
            break;
        }
    }
    if(k == 0) cout<<0<<endl;
    else if(sum < k) cout<<"-1"<<endl;
    else cout<<count<<endl;
    return 0;
}
