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
        if(s == "abc" || s == "acb" || s == "bac" || s == "cba") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

