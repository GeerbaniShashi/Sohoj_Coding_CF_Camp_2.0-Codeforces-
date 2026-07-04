#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, a, b;
        cin>>n>>a>>b;
        string str = "";
        for(ll i=0; i<n; i++)
        {
            char ch = 'a';
            ll count = 0;
            for(ll j=i; j<min(i+b,n); j++)
            {
                str += (char)(ch + count);
                count++;
            }
            i+=b-1;
        }
        cout<<str<<endl;
    }
    return 0;
}
