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
        if(n%2==1) cout<<"YES"<<endl;
        else
        {
            ll count = 0;
            for(ll i=0; i<64; i++)
            {
                if(n == pow(2,i))
                {
                    count = 1;
                    break;
                }
            }
            if(count == 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
