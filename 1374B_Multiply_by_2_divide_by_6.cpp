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
        ll count2 = 0, count3 = 0;
        while(n % 2 == 0)
        {
            n = n/2;
            count2++;
        }
        while(n % 3 == 0)
        {
            n = n/3;
            count3++;
        }
        if(n != 1 || count2 > count3)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<count3 - count2 + count3<<endl;
        }
    }
    return 0;
}
