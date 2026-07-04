#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll sum = 0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum % 2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
 
