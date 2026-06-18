#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll n, k;
    cin>>n>>k;
    string str = "";
    for(ll i=0; i<min(n,k); i++)
    {
        str = str + (char)(i+97);
    }
    for(ll i=min(n,k); i<n; i++)
    {
        if(i%2==0) str += 'a';
        else str += 'b';
    }
    cout<<str<<endl;

    return 0;
}
