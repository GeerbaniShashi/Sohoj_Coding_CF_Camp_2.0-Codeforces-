#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s, t;
    cin>>s>>t;
    ll n1 = s.length(), n2 = t.length();
    for(ll i=0; i<n1; i++)
    {
        if(s[i] == t[i]) cout<<0;
        else cout<<1;
    }
    cout<<endl;
    return 0;
}
