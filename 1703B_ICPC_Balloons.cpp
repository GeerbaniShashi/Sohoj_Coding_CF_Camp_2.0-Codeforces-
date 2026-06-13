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
        string s;
        cin>>s;
        map<char, ll>mp;
        ll count = 0;
        for(ll i=0; i<n; i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] == 1) count += 2;
            else count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
