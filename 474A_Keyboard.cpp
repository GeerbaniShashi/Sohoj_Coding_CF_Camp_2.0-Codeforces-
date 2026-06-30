#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    ll n = s.length();
    vector<char>v1 = {'q','w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    vector<char>v2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
    vector<char>v3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    if(ch == 'L')
    {
        for(ll i=0; i<n; i++)
        {
            for(ll j=v1.size() - 1; j>= 0; j--)
            {
                if(s[i] == v1[j]) s[i] = v1[j+1];
                else if(s[i] == v2[j]) s[i] = v2[j+1];
                else if(s[i] == v3[j]) s[i] = v3[j+1];
            }
        }
    }
    else
    {
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<v1.size(); j++)
            {
                if(s[i] == v1[j]) s[i] = v1[j-1];
                else if(s[i] == v2[j]) s[i] = v2[j-1];
                else if(s[i] == v3[j]) s[i] = v3[j-1];
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
