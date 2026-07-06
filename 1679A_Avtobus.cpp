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
        if(n % 2 == 1 || n < 4) cout<<"-1"<<endl;
        else
        {
            ll minimum = ceil(n / 6.0);
            ll maximum = n/4;
            cout<<minimum<<" "<<maximum<<endl;
        }
    }
    return 0;
}
