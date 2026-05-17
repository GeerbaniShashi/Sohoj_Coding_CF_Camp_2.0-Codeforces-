#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll n = s.length();
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '4' || s[i] == '7') count++;
    }
    if(count == 4 || count == 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
