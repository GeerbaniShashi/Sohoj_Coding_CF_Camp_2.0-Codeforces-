#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll counta = 0, countd = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == 'A') counta++;
        else countd++;
    }
    if(counta > countd) cout<<"Anton"<<endl;
    else if(counta < countd) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

    return 0;
}
