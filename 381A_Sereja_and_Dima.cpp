#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll sum1 = 0, sum2 = 0;
    ll l = 0, r = n-1;
    ll count1 = 0, count2 = 0;
    while(l <= r)
    {
        if(count1 == 0)
        {
            sum1 += max(a[l], a[r]);
            ll x = 0;
            if(a[l] > a[r]) x = l;
            else x = r;
            if(l == x) l++;
            else r--;
            count1 = 1;
            count2 = 0;
        }
        else if(count2 == 0)
        {
            sum2 += max(a[l], a[r]);
            ll x = 0;
            if(a[l] > a[r]) x = l;
            else x = r;
            if(l == x) l++;
            else r--;
            count1 = 0;
            count2 = 1;
        }
    }

    cout<<sum1<<" "<<sum2<<endl;

    return 0;
}
