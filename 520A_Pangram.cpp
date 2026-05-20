#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z') s[i] = (char)(s[i]+32);
    }
    set<char>st;
    for(ll i=0; i<n; i++)
    {
        st.insert(s[i]);
    }
    if(st.size() == 26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
