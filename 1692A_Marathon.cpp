#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll count = 0;
        if(a < b) count++;
        if(a < c) count++;
        if(a < d) count++;
        cout<<count<<endl;
    }
    return 0;
}
