#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll row, col;
    cin>>row>>col;
    for(ll i=1; i<=row; i++)
    {
        for(ll j=1; j<=col; j++)
        {
            if(i % 2 == 1)
            {
                cout<<"#";
            }
            else
            {
                if(i % 4 == 0)
                {
                    if(i % 4 == 0 && j == 1)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                else
                {
                    if(i % 2 == 0 && j == col && i % 4 != 0)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
