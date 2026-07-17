#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    string str = "hello";
    ll count = 0;
    ll n = s.length();
    bool ok = false;
    for(ll i=0; i<n; i++)
    {
        if(str[count] == s[i])
        {
            count++;
        }
        if(count == 5)
        {
            ok = true;
            break;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
