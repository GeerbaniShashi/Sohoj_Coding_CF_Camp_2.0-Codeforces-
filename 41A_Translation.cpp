#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s, t;
    cin>>s>>t;
    reverse(t.begin(), t.end());
    if(s == t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
