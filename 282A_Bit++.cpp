#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s[n];
    for(ll i=0; i<n; i++)
    {
        cin>>s[i];
    }
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == "X++")
        {
            count++;
        }
        else if(s[i] == "++X")
        {
            ++count;
        }
        else if(s[i] == "X--")
        {
            count--;
        }
        else if(s[i] == "--X")
        {
            --count;
        }
    }
    cout<<count<<endl;
    return 0;
}
