#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    ll count1 = 0, count2 = 0;
    for(ll i=0; i<n; i++)
    {

        if(a[i] == - 1 && count1 > 0)
        {
            count1--;
        }
        else if(a[i] == - 1 && count1 == 0)
        {
            count2++;
        }
        else
        {
            count1 += a[i];
        }
    }
    cout<<count2<<endl;
    return 0;
}
