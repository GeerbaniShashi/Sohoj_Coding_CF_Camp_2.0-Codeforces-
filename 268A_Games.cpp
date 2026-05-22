#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(i != j && a[i] == b[j]) count++;
        }
        for(ll j=0; j<n; j++)
        {
            if(i != j && a[j] == b[i]) count++;
        }
    }
    cout<<count/2<<endl;
    return 0;
}
