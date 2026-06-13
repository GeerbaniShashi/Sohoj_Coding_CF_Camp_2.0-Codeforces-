#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    ll n = s.length();
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '1') sum += a1;
        else if(s[i] == '2') sum += a2;
        else if(s[i] == '3') sum += a3;
        else if(s[i] == '4') sum += a4;
    }
    cout<<sum<<endl;

    return 0;
}
