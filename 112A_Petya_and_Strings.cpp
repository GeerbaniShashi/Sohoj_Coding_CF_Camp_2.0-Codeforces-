#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    ll n1 = s1.length(), n2 = s2.length();
    for(ll i=0; i<n1; i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i] = (char)(s1[i] + 32);
        }
    }
    for(ll i=0; i<n2; i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i] = (char)(s2[i] + 32);
        }
    }
    if(s1 == s2) cout<<0<<endl;
    else if(s1 < s2) cout<<"-1"<<endl;
    else cout<<1<<endl;
    return 0;
}
