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
        string s;
        cin>>s;
        ll count = 1, maximum = 1;
        for(ll i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            else
            {
                maximum = max(maximum, count);
                count = 1;
            }
        }
        maximum = max(maximum, count);
        cout<<maximum+1<<endl;
    }

    return 0;
}
