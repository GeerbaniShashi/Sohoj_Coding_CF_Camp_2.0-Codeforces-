#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m, a;
    cin>>n>>m>>a;
    ll length = n/a;
    ll width = m/a;
    if(n % a != 0) length++;
    if(m % a != 0) width++;
    cout<<(length*width)<<endl;
    return 0;
}
