#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str = "codeforces";
        string s;
        cin>>s;
        ll count = 0;
        for(ll i=0; i<s.length(); i++)
        {
            if(str[i] != s[i]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
