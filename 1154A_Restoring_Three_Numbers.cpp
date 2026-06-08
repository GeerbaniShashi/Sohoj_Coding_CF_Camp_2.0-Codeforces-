#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x1, x2, x3, x4;
    cin>>x1>>x2>>x3>>x4;
    ll maximum = max(x1, max(x2, max(x3, x4)));
    if(maximum - x1 == 0)
    {
        cout<<maximum - x2<<" "<<maximum - x3<<" "<<maximum - x4<<endl;
    }
    else if(maximum - x2 == 0)
    {
        cout<<maximum - x1<<" "<<maximum - x3<<" "<<maximum - x4<<endl;
    }
    else if(maximum - x3 == 0)
    {
        cout<<maximum - x1<<" "<<maximum - x2<<" "<<maximum - x4<<endl;
    }
    else if(maximum - x4 == 0)
    {
        cout<<maximum - x1<<" "<<maximum - x2<<" "<<maximum - x3<<endl;
    }
    return 0;
}
