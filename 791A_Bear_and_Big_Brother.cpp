#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b;
    cin>>a>>b;
    ll year = 0;
    for(ll i=1; i<=100; i++)
    {
        a = a*3;
        b = b*2;
        year++;
        if(a > b) break;
    }
    cout<<year<<endl;
    return 0;
}
