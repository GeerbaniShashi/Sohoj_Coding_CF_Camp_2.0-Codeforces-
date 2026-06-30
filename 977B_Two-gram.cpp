#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<string>v;
    for(ll i=0; i<n-1; i++)
    {
        string str = "";
        str += s[i];
        str += s[i+1];
        v.push_back(str);
    }
    map<string,ll>mp;
    map<string,ll>::iterator it;
    for(ll i=0; i<v.size(); i++)
    {
        mp[v[i]]++;
    }
    string st = "";
    ll maximum = 0;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if((*it).second > maximum)
        {
            maximum = (*it).second;
            st = (*it).first;
        }
    }
    cout<<st<<endl;
    return 0;
}
