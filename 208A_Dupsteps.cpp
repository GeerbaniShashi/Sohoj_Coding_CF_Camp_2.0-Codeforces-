#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    ll n = s.length();
    for(ll i=0; i<n; i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i += 2;
            cout<<' ';
        }
        else
        {
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
