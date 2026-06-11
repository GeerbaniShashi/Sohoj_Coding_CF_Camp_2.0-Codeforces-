#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a == b) cout<<c<<endl;
        else if(b == c) cout<<a<<endl;
        else cout<<b<<endl;
    }
    return 0;
}

