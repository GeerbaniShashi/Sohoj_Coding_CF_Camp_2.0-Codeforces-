#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;
        if(ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'r' || ch == 's') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
