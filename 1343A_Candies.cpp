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
        ll answer;
        for(ll i=2; i<=64; i++)
        {
            ll x = pow(2,i) - 1;
            if(n % x != 0)
            {
                continue;
            }
            else
            {
                answer = n / x;
                break;
            }
        }
        cout<<answer<<endl;
    }

    return 0;
}
