#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll n = s.length();
    string str = "";
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '.') str += '0';
        else if(s[i] == '-' && s[i+1] == '.')
        {
            str+='1';
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-')
        {
            str+='2';
            i++;
        }
    }
    cout<<str<<endl;
    return 0;
}
