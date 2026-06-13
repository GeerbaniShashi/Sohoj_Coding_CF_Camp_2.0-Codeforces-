#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll m[n], c[n];
    ll countm = 0, countc = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>m[i]>>c[i];
        if(m[i] > c[i]) countm++;
        else if(m[i] < c[i]) countc++;
    }
    if(countm > countc) cout<<"Mishka"<<endl;
    else if(countm < countc) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;

    return 0;
}
