#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a > b) swap(a, b);
        ll count = 0;
        for(ll i=a; i<=b; i++)
        {
            if(i == c) count++;
            if(i == d) count++;
        }
        if(count == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
