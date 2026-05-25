#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        vector<ll>v;
        if(n % k == 0)
        {
            v.push_back(n-1);
            v.push_back(1);
        }
        else
        {
            v.push_back(n);
        }
        cout<<v.size()<<endl;
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

