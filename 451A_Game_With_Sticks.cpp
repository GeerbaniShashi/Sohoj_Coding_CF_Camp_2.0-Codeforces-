#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin>>n>>m;
    ll x = min(n, m);
    if(x % 2 == 1) cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;
    return 0;
}
