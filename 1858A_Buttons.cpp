#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        if(c % 2 == 0)
        {
            a += (c/2);
            b += (c/2);
        }
        else
        {
            a += ((c/2) + 1);
            b += (c/2);
        }
        if(a > b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}
