#include <iostream>
#include<cmath>
#define ll long long
int m = 1000000007;
using namespace std;
ll power(ll x, unsigned ll n, int mod){
    ll res = 1;
    while (n){
        if (n%2!=0){
            res = (res*x)%mod;
        }
        n=n/2;
        x = (x*x)%mod;
    }
    return res;
}
int main() {
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        cout << power(2,n-1,m) << endl;

       // cout << answer%m << endl;
    }
    return 0;
}
