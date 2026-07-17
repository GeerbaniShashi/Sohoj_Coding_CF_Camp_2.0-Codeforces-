#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll n = s.length();
    vector<char>v;
    for(ll i=0; i<n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (char) (s[i] + 32);
        }
    }
    for(ll i=0; i<n; i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            v.push_back(s[i]);
        }
    }
    string str = "";
    for(ll i=0; i<v.size(); i++)
    {
        str = str + '.';
        str = str + v[i];
    }
    cout<<str<<endl;
    return 0;
}
