#include <iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        ll fact;
        cin >> fact;
        ll answer = 1;
        for (int i = 1; i <= fact; ++i) {
             answer*=i;
        }
        cout << answer << endl;
    }
    return 0;
}
