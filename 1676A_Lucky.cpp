#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        ll sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        if(sum1 == sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
