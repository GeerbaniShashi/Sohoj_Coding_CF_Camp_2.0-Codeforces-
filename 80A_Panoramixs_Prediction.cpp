#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin>>n>>m;
    vector<ll>v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    ll count = 0;
    ll x = v.size();
    for(ll i=0; i<x-1; i++)
    {
        if(v[i] == n && v[i+1] == m)
        {
            count = 1;
            break;
        }
    }
    if(count == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
