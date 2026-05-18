#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] <= k) sum+=1;
        else sum+=2;
    }
    cout<<sum<<endl;
    return 0;
}
