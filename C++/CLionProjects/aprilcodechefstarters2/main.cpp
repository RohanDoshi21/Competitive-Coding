#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int m;
        cin >> m;
        int x, y;
        cin >> x >> y;
        int solved[n] = {0};
        int partial[n] = {0};
        char solving;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> solving;
                if (solving == 'F')
                    solved[i]++;
                else if (solving == 'P')
                    partial[i]++;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (solved[i] >= x || (partial[i] >= y && solved[i] >= x-1))
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}
