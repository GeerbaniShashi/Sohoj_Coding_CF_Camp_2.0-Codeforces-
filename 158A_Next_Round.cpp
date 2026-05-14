#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    ll answer = 0;
    for(ll i=0; i<n; i++)
    {
        if(x-1 == i)
        {
            answer = a[i];
            break;
        }

    }
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] >= answer && a[i] != 0)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
