#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        char ch[n][m];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>ch[i][j];
            }
        }
        ll maximum = 0;
        ll row =0;
        for(ll i=0; i<n; i++)
        {
            ll count = 0;
            for(ll j=0; j<m; j++)
            {
                if(ch[i][j] == '#')
                {
                    count++;
                }
            }
            if(count > maximum)
            {
                maximum = count;
                row = i;
            }
        }
        ll l=0, r=0;
        for(ll i=0; i<m; i++)
        {
            if(ch[row][i] == '#')
            {
                l = i;
                break;
            }
        }
        for(ll i=m-1; i>=0; i--)
        {
            if(ch[row][i] == '#')
            {
                r = i;
                break;
            }
        }
        cout<<row + 1 << " "<<(l + ((r-l+1)/2)) + 1<<endl;
    }
    return 0;
}
