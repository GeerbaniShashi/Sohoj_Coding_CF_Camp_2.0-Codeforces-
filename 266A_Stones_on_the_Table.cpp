#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count = 0;
    for(ll i=0; i<n-1; i++)
    {
        if(s[i] == s[i+1]) count++;
    }
    cout<<count<<endl;
    return 0;
}
