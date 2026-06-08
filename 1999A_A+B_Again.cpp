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
        ll temp = n, sum = 0;
        while(temp != 0)
        {
            ll rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
