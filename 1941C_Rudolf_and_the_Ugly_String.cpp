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
        string str;
        cin>>str;
        ll count = 0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='m'&&str[i+1]=='a'&&str[i+2]=='p')
            {
                count++;
                i+=2;
            }
            else if(str[i]=='p'&&str[i+1]=='i'&&str[i+2]=='e')
            {
                count++;
                i+=2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
