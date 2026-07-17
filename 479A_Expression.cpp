#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, c;
    cin>>a>>b>>c;
    ll expression1 = a+b*c;
    ll expression2 = a*(b+c);
    ll expression3 = a*b*c;
    ll expression4 = (a+b)*c;
    ll expression5 = a+b+c;
    ll answer = max(expression1, max(expression2, max(expression3, max(expression4, expression5))));
    cout<<answer<<endl;
    return 0;
}
