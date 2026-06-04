#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    ll answer = 240 - k;
    ll count = 0, sum = 0;
    for(ll i=1; i<=n; i++)
    {
        if(answer >= (5*i))
        {
            count++;
            answer -= (5*i);
        }
        else break;
    }
    cout<<count<<endl;
    return 0;
}
