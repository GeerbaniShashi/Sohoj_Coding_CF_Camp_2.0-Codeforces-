#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll year;
    cin>>year;
    string str = "";
    for(ll i=year+1; ; i++)
    {
        string x = to_string(i);
        set<char>ch;
        for(ll i=0; i<4; i++)
        {
            ch.insert(x[i]);
        }
        if(ch.size() == 4)
        {
            str = x;
            break;
        }
    }
    cout<<str<<endl;
    return 0;
}
