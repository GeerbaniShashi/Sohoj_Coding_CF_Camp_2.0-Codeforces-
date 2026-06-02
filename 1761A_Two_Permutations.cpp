#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, a, b;
        cin>>n>>a>>b;
        if((n == a && n == b) || ( n - (a+b)) >= 2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

