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
        ll and_operation = a[0];
        for(ll i=1; i<n; i++)
        {
            and_operation &= a[i];
        }
        cout<<and_operation<<endl;
    }
    return 0;
}
