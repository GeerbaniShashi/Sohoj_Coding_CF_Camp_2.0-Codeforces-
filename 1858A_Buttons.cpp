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
        if(a == b)
        {
            if(c % 2 == 0) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
        else
        {
            ll minimum = min(a, b);
            a = a - minimum;
            b = b - minimum;
            if(a > b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
    return 0;
}
