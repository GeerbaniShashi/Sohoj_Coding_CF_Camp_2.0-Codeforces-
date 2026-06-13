#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll i=1; i<= 1000000; i++)
        {
            if(i % 3 == 0 || i % 10 == 3)
            {
                continue;
            }
            else
            {
                v.push_back(i);
            }
            if(v.size() == 1000) break;
        }
        cout<<v[n-1]<<endl;
    }
    return 0;
}
