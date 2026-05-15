#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a[5][5];
    ll row = 0, col = 0;
    for(ll i=0; i<5; i++)
    {
        for(ll j=0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
            {
                row = i+1;
                col = j+1;
            }
        }
    }
    cout<<abs(3-row) +abs(3-col)<<endl;
    return 0;
}
