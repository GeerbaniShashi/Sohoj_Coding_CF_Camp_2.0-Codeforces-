#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        ll answer = 0;
        if(a == 1) answer++;
        if(b == 1) answer++;
        if(c == 1) answer++;
        if(answer >= 2) count++;
    }
    cout<<count<<endl;
    return 0;
}
