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
        if(a == b) cout<<0<<endl;
        else if(a < b)
        {
            ll x = b - a;
            if(x % 10 == 0) cout<<(x/10)<<endl;
            else cout<<(x/10)+1<<endl;
        }
        else if(a > b)
        {
            ll x = a - b;
            if(x % 10 == 0) cout<<(x/10)<<endl;
            else cout<<(x/10)+1<<endl;
        }
    }
    return 0;
}
