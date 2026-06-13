#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        string s3 = "";
        s3 += s2[0];
        s3 += s1[1];
        s3 += s1[2];
        string s4 = "";
        s4 += s1[0];
        s4 += s2[1];
        s4 += s2[2];
        cout<<s3<<" "<<s4<<endl;
    }
    return 0;
}
