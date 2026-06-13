#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        char ch[10][10];
        for(ll i=0; i<10; i++)
        {
            for(ll j=0; j<10; j++)
            {
                cin>>ch[i][j];
            }
        }
        ll sum = 0;
        for(ll i=0; i<10; i++)
        {
            for(ll j=0; j<10; j++)
            {
                if(ch[i][j] == 'X')
                {
                    if((i >= 4 && i <= 5) && (j >= 4 && j <= 5)) sum += 5;
                    else if((i >= 3 && i <= 6) && (j >= 3 && j <= 6)) sum += 4;
                    else if((i >= 2 && i <= 7) && (j >= 2 && j <= 7)) sum += 3;
                    else if((i >= 1 && i <= 8) && (j >= 1 && j <= 8)) sum += 2;
                    else if((i >= 0 && i <= 9) && (j >= 0 && j <= 9)) sum += 1;

                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
