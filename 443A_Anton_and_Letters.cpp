#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    ll n = s.length();
    set<char>st;
    for(ll i=0; i<n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            st.insert(s[i]);
        }
    }
    cout<<st.size()<<endl;
    return 0;
}
