#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        ll x = (a+b) / 2;
        cout<<(x - a) + (b - x) <<endl;
    }
    return 0;
}
