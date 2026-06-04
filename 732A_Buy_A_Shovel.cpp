#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll k, r;
    cin>>k>>r;
    ll count = 0;
    for(ll i=1; ; i++) {
        if(((k*i) - r) % 10 == 0 || (k*i) % 10 == 0) {
            count = i;
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
