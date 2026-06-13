#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin>>n>>m;
    ll point = max(n, m);
    if(point == 1) cout<<"1/1"<<endl;
    else if(point == 2) cout<<"5/6"<<endl;
    else if(point == 3) cout<<"2/3"<<endl;
    else if(point == 4) cout<<"1/2"<<endl;
    else if(point == 5) cout<<"1/3"<<endl;
    else if(point == 6) cout<<"1/6"<<endl;

    return 0;
}
