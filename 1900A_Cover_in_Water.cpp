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
        ll count = 0, maximum = 0, dot = 0;
        for(ll i=0; i<n; i++)
        {
            if(s[i] == '.')
            {
                count++;
                dot++;
            }
            else
            {
                maximum = max(maximum, count);
                count = 0;
            }

        }
        maximum = max(maximum, count);
        if(maximum >= 3) cout<<2<<endl;
        else cout<<dot<<endl;
    }
    return 0;
}

