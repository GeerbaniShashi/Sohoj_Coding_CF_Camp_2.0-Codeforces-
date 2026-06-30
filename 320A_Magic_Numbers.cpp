#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll n = s.length();
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
        {
            i+=2;
        }
        else if(s[i]=='1' && s[i+1]=='4')
        {
            i+=1;
        }
        else if(s[i]=='1')
        {
            continue;
        }
        else
        {
            count = 1;
            break;
        }
    }
    if(count == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
