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
        map<char, ll>mp;
        map<char, ll>::iterator it;
        string s;
        cin>>s;
        for(ll i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        ll diff = 0;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if((*it).second % 2 == 1) diff++;
        }
        if(diff <= k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
