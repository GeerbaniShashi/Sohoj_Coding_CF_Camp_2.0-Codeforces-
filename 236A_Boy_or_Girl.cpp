#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    set<char>st;
    ll n = s.length();
    for(ll i=0; i<n; i++)
    {
        st.insert(s[i]);
    }
    ll x = st.size();
    if(x % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
