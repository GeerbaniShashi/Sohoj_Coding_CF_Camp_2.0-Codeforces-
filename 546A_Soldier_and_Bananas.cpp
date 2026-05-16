#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll k, n, w;
    cin>>k>>n>>w;
    ll sum = 0;
    for(ll i=1; i<=w; i++)
    {
        sum = sum + (i*k);
    }
    if(sum - n > 0) cout<<(sum - n)<<endl;
    else cout<<0<<endl;
    return 0;
}
