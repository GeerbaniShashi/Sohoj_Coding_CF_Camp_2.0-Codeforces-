#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll minimum = INT_MAX, maximum = INT_MIN;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        maximum = max(maximum, a[i]);
        minimum = min(minimum, a[i]);
    }

    if(maximum == a[0] && minimum == a[n-1])
    {
        cout<<0<<endl;
    }
    else
    {
        ll maximumHeight = 0, maximumIndex = 0, minimumHeight = 101, minimumIndex = n-1;
        for(ll i=0; i<n; i++)
        {
            if(a[i] > maximumHeight)
            {
                maximumHeight = a[i];
                maximumIndex = i;
            }
            if(a[i] <= minimumHeight)
            {
                minimumHeight = a[i];
                minimumIndex = i;
            }

        }
        if(maximumIndex > minimumIndex) cout<<maximumIndex - 2 + n - minimumIndex<<endl;
        else cout<<maximumIndex - 1 + n - minimumIndex<<endl;
    }

    return 0;
}
