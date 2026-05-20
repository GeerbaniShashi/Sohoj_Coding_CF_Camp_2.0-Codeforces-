#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    set<ll>st;
    st.insert(s1);
    st.insert(s2);
    st.insert(s3);
    st.insert(s4);
    cout<<(4-st.size())<<endl;
    return 0;
}
