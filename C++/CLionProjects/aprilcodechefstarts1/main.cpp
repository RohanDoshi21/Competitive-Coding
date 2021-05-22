#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int x,y,x1,y1,d;
        cin >> x>> y >> x1 >> y1 >> d;
        if (d*x1 > x || d*y1 > y)
            cout << "NO" << endl;
        else
                cout << "YES" << endl;
        }
    return 0;
}
