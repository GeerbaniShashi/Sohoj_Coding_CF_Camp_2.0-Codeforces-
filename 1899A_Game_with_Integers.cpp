#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n % 3 == 0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
