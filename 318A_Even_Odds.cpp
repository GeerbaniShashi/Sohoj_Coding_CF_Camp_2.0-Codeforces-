#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    ll x;
    if(n % 2 == 0) x = n/2;
    else x = (n/2) + 1;
    if(x >= k)
    {
        cout<<(2*k)-1<<endl;
    }
    else
    {
        cout<<(k - x) * 2<<endl;
    }
    return 0;
}
