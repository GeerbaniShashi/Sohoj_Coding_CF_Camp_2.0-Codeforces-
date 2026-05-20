#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    for(ll i=1; i<n; i++)
    {
        if(i % 2 == 1) cout<<"I hate that ";
        else cout<<"I love that ";
    }
    if(n % 2 == 1) cout<<"I hate it"<<endl;
    else cout<<"I love it"<<endl;

    return 0;
}
