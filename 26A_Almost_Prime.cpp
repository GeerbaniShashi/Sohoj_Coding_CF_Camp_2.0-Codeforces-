#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[10000];
    ll count = 0;
    for(ll i=2; i<=n; i++)
    {
        for(ll j=2; j<i; j++)
        {
            if(a[j] == 0 && i % j == 0)
            {
                a[i]++;
            }
        }
        if(a[i] == 2) count++;
    }
    cout<<count<<endl;
    return 0;
}
