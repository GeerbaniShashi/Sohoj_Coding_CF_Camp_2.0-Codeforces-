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
        ll temp = n;
        vector<ll>v;
        ll count = 0;
        while(temp != 0)
        {
            ll rem = temp % 10;
            ll answer =  rem * pow(10, count);
            count++;
            temp = temp / 10;
            if(answer == 0) continue;
            else v.push_back(answer);
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
