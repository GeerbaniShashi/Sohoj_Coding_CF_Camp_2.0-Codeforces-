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
        ll count = 0;
        for(ll i=0; i<n/2; i++)
        {
            if(s[i]!=s[n-i-1]) count+=2;
            else break;
        }
        cout<<n-count<<endl;
    }
    return 0;
}
