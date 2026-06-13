#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll countOfDivisor(ll n)
{
    ll count = 1;
    for(ll i=2; i<=n/2; i++)
    {
        if(n % i == 0) count++;
    }
    if(n > 1) count++;
    return count;
}

int main()
{
    ll n;
    cin>>n;
    ll x = 0, y = 0;
    for(ll i=4; i<=n; i++)
    {
        if(countOfDivisor(n-i) >= 3 && countOfDivisor(i) >= 3)
        {
            x = i;
            y = n - i;
            break;
        }
    }
    cout<<x<<" "<<y<<endl;

    return 0;
}
