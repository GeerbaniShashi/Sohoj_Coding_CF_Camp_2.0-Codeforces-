#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        for(ll i=0; i<n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] = (char)(s[i]+32);
        }
        if(s == "yes") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
