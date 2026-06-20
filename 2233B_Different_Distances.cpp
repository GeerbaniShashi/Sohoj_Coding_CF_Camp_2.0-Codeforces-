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
        vector<ll>v1 = {1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3};
        ll count = 1;
        if(n % 2 == 1)
        {
            for(ll i=0; i<v1.size(); i++)
            {
                cout<<v1[i]<<" ";
            }
            count += 3;
        }
        while(count <= n)
        {
            cout<<count<<" "<<count+1<<" "<<count+1<<" "<<count<<" "<<count+1<<" "<<count<<" "<<count<<" "<<count+1<<" ";
            count += 2;
        }
        cout<<endl;
    }
    return 0;
}
