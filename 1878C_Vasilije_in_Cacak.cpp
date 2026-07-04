#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, x;
        cin>>n>>k>>x;
        ll sum1 = k*(k+1)/2;
        ll sum2 = k*(2*n - k +1) / 2;
        if(x >= sum1 && x <= sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
