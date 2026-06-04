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
    ll minimum = a[0], maximum = a[0];
    ll count = 0;
    for(ll i=1; i<n; i++) {
        if(a[i] < minimum) {
            count++;
            minimum = a[i];
        }
        else if(a[i] > maximum) {
            count++;
            maximum = a[i];
        }
    }
    cout<<count<<endl;
    return 0;
}

