#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] == 1) count++;
    }
    if(count > 0) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}
