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
        ll count = 0, maximum = 0;
        for(ll i=1; i<= 10000; i++)
        {
            if(n % i == 0)
            {
                count++;
            }
            else
            {
                maximum = max(maximum, count);
                count = 0;
            }
        }
        cout<<maximum<<endl;
    }
    return 0;
}
