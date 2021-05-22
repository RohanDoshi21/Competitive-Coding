#include <iostream>
using namespace std;
#define ll long long 
bool solve(ll x, ll n){
    if (x == n)
        return true;
    else if(x > n)
        return false;
    bool c1 = solve(x*10, n);
    bool c2 = solve(x*20, n);
    return c1||c2;
}

int main() {
    ll t;
    cin >> t;
    ll n;
    while (t--){
        cin >> n;
        bool x = solve(1,n);
        if (x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}