// codechef may long 2021 Modular Equation code: modeeq
#include <iostream>
#include<vector>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n , m;
        cin >> n >> m;
        ll count = 0;
        vector<ll> vec(n+1,1);
        for (ll i = 2; i <= n; i++) {
            ll a = m%i;
            count += vec[a];
            for (ll j = a; j <= n; j+=i) {
                    vec[j]++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
