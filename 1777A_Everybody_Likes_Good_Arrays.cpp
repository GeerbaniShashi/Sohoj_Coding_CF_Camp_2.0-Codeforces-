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
        for(ll i=0; i<n-1; i++)
        {
            if((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2==1&&a[i+1]%2==1))
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
