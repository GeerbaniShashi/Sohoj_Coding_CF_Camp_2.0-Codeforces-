#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        if(n % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(k % 2 == 1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
