#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n][3];
    ll sum1 = 0, sum2 = 0, sum3 = 0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<3; j++)
        {
            cin>>a[i][j];
            sum1 = sum1 + a[i][0];
            sum2 = sum2 + a[i][1];
            sum3 = sum3 + a[i][2];
        }
    }
    if(sum1 == 0 || sum2 == 0 || sum3 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
