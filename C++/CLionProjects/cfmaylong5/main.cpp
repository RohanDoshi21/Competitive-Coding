//intereting sequence code:ISS

#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        ll sum = 0;
        ll k;
        cin >> k;
        cout << 4*k+1 << endl;
        /*
        ll arr[2*k+1];
        for (int i = 0; i < 2*k+1; ++i) {
            arr[i] = k + (i+1)*(i+1);
        }
        for (int i = 0; i < 2 * k; ++i) {
            sum += __gcd(arr[i],arr[i+1]);
        }
        cout << sum << endl;
         */
    }
    return 0;
}
