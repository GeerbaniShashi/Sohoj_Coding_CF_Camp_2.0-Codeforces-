#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll answer = 0, maximum = 0;
        for(ll i=0; i<n; i++)
        {
            if(i==0)
            {
                answer = a[i];
                maximum =a[i];
            }
            else
            {
                answer = a[i] - a[i-1];
                maximum = max(maximum, answer);
            }
        }
        answer = 2*abs(a[n-1] - x);
        maximum = max(maximum, answer);

        cout<<maximum<<endl;
    }
    return 0;
}
