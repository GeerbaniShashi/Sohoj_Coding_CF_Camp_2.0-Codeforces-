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
        ll maximum = 0, count = 0;
        for(ll i=0; i<n; i++)
        {
            if(a[i] == 0) count++;
            else
            {
                maximum = max(maximum, count);
                count = 0;
            }
        }
        maximum = max(maximum, count);
        cout<<maximum<<endl;
    }
    return 0;
}
