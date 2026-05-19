#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
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
    double avg = (double)sum / n;
    cout<<fixed<<setprecision(12)<<avg<<endl;

    return 0;
}
