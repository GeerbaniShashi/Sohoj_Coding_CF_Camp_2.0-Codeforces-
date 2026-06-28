#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    if(n >= 0) cout<<n<<endl;
    else
    {
        ll n1 = n / 10;
        ll n2 = (n / 100)*10 + (n % 10);
        cout<<max(n1, n2)<<endl;
    }
    return 0;
}
