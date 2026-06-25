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
        if(s[i]=='H' || s[i]=='Q' || s[i] =='9')
        {
            count = 1;
            break;
        }
    }
    if(count == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
 
