#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s[n];
    for(ll i=0; i<n; i++)
    {
        cin>>s[i];
    }
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == "Tetrahedron") sum += 4;
        else if(s[i] == "Cube") sum += 6;
        else if(s[i] == "Octahedron") sum += 8;
        else if(s[i] == "Dodecahedron") sum += 12;
        else if(s[i] == "Icosahedron") sum += 20;
    }
    cout<<sum<<endl;
    return 0;
}
