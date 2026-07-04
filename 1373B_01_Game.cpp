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
        ll count0 = 0, count1 = 0;
        ll n = s.length();
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0') count0++;
            else count1++;
        }
        if(min(count0, count1) % 2 == 1) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
    return 0;
}
