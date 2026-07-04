#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    int a[k];
    for(int i=0; i<k; i++)
    {
        cin>>a[i];
    }
    sort(a,a+k);
    ll answer = 0;
    ll count = a[k-1]-a[0];
    for(int i = n; i<=k; i++)
    {
        answer = abs(a[i-1]-a[i-n]);
        count = min(count,answer);
    }
    cout<<count<<endl;
    return 0;
}
