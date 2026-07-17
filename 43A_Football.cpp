#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s[n];
    map<string, ll>mp;
    map<string, ll>::iterator it;
    for(ll i=0; i<n; i++)
    {
        cin>>s[i];
        mp[s[i]]++;
    }
    ll maximum =0;
    string value = "";
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if((*it).second > maximum)
        {
            maximum = (*it).second;
            value = (*it).first;
        }
    }
    cout<<value<<endl;
    return 0;
}
