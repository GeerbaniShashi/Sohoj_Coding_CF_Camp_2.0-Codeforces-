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
        vector<ll>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        cout<<v[1]<<endl;
    }
    return 0;
}
