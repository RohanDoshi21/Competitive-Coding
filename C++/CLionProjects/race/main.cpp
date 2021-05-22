#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int x, r , m;
        cin >> x >> r >> m;
        r = r*60;
        m = m*60;
        if (m-2*r+x>=0){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
