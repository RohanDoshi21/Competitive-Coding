#include <iostream>
using namespace std;
int main() {
   int t;
   cin >> t;
    while (t--){
        int n , r;
        cin >> n >> r;
        int ai[n];
        int bi[n];
        for (int i = 0; i < n; ++i) {
            cin >> ai[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> bi[i];
        }
        int max_tension = 0;
        int tension = 0;
        for (int i = 0; i < n; ++i) {
            tension += bi[i];
            if (tension > max_tension)
                max_tension = tension;
            if (i !=n-1)
                tension -= (ai[i+1]-ai[i])*r;
            if (tension < 0)
                tension = 0;
        }
        cout << max_tension << endl;
    }
    return 0;
}

