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
        ll count = 0;
        for(ll i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
        }
        if(count <= 2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
