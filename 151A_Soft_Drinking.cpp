#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll answer1 = k*l;
    ll answer2 = answer1/nl;
    ll answer3 = c*d;
    ll answer4 = p/np;
    ll answer = min(answer2, min(answer3, answer4)) / n;
    cout<<answer<<endl;
    return 0;
}
