#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    set<ll>st;
    ll p;
    cin>>p;
    ll a[p];
    for(ll i=0; i<p; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    ll q;
    cin>>q;
    ll b[q];
    for(ll i=0; i<q; i++)
    {
        cin>>b[i];
        st.insert(b[i]);
    }
    if(n == st.size()) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
