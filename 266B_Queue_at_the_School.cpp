#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(ll i=0; i<t; i++)
    {
        for(ll j=0; j<n-1; j++)
        {
            if(s[j] == 'B' && s[j+1] == 'G')
            {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
