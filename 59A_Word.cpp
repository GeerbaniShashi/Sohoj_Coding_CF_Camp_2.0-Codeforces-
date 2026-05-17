#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll count1 = 0, count2 = 0;
    ll n = s.length();
    for(ll i=0; i<n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') count1++;
        else count2++;
    }
    if(count1 > count2)
    {
        for(ll i=0; i<n; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = (char) (s[i] - 32);
            }
        }
    }
    else
    {
        for(ll i=0; i<n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = (char) (s[i] + 32);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
