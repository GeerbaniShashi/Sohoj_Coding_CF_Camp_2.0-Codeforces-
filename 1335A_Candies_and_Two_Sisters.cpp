#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n ;
        cin>>n;
        if(n <= 2) cout<<0<<endl;
        else
        {
            cout<<(n-1)/2<<endl;
        }
    }
    return 0;
}
