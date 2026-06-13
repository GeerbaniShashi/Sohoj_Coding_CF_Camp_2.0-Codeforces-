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
        if(a+b >= 10 || b+c>= 10 || c+a>= 10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
