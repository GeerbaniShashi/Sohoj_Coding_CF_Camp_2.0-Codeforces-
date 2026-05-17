#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, k; cin>>n>>k;
    while(k--) {
        ll temp = n % 10;
        if(temp > 0) {
            n--;
        } else {
            n = n / 10;
        }
    }
    cout<<n<<endl;
    return 0;
}
