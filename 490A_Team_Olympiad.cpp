#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    vector<ll>v1, v2, v3;
    ll count1 = 0, count2 = 0, count3 = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == 1)
        {
            count1++;
            v1.push_back(i+1);
        }
        if(a[i] == 2)
        {
            count2++;
            v2.push_back(i+1);
        }
        if(a[i] == 3)
        {
            count3++;
            v3.push_back(i+1);
        }
    }
    if(min(count1, min(count2, count3)) == 0) cout<<0<<endl;
    else
    {
        cout<<min(count1, min(count2, count3))<<endl;
        for(ll i=0; i<min(count1, min(count2, count3)); i++)
        {
            cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
        }
    }
    return 0;
}
