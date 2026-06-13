#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        string str = "";
        str += s[0];
        for(ll i=1; i<n; i++)
        {
            if(s[i] == s[i+1])
            {
                str += s[i];
                i++;
            }
            else
            {
                str += s[i];
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
