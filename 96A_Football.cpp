#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll n = s.length();
    ll maximum = 0, count0 = 0, count1 = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            count1++;
            maximum = max(maximum, count0);
            count0 = 0;
        }
        else
        {
            count0++;
            maximum = max(maximum, count1);
            count1= 0;
        }
    }
    maximum = max(maximum, max(count0, count1));
    if(maximum >= 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
