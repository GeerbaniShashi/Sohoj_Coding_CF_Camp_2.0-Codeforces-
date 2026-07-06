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
            if(a[i] == 1) a[i]++;
        }
        for(ll i=0; i<n-1; i++)
        {
            if(a[i+1] % a[i] == 0) a[i+1]++;
        }
        for(ll i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
