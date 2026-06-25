#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll count = 1, maximum = 1;
    for(ll i=0; i<n-1; i++)
    {
        if(a[i]<=a[i+1])
        {
            count++;
            maximum = max(maximum, count);
        }
        else
        {
            count = 1;
        }
    }
    cout<<maximum<<endl;
    return 0;
}
