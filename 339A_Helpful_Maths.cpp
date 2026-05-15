#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll n = s.length();
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='1' || s[i] == '2' || s[i] == '3')
        {
            v.push_back((s[i]-'0'));
        }
    }
    sort(v.begin(), v.end());
    for(ll i=0; i<v.size()-1; i++)
    {
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1]<<endl;
    return 0;
}
