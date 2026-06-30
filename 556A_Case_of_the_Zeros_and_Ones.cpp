#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count1 = 0, count2 = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='0') count1++;
        else count2++;
    }
    cout<<abs(count1-count2)<<endl;
    return 0;
}
