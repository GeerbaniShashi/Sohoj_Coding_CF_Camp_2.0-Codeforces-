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
        string s;
        cin>>s;
        if(n < 5 || n > 5) cout<<"NO"<<endl;
        else
        {
            string str = "Timur";
            sort(str.begin(), str.end());
            sort(s.begin(), s.end());
            if(s == str) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
