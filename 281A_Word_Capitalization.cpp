#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s[0] >= 'a' && s[0] <= 'z') s[0] = (char)(s[0] - 32);
    cout<<s<<endl;
    return 0;
}
