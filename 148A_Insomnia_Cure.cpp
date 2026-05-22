#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    ll count = 0;
    for(ll i=1; i<=d; i++)
    {
        if(i % k == 0) count++;
        else if(i % l == 0) count++;
        else if(i % m == 0) count++;
        else if(i % n == 0) count++;
    }
    cout<<count<<endl;
    return 0;
}
