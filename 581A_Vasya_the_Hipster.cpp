#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b;
    cin>>a>>b;
    ll maximum = max(a, b);
    ll minimum = min(a, b);
    cout<<minimum<<" "<<(maximum - minimum)/2<<endl;
    return 0;
}
