#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int a, y, x;
        cin >> a >> y >> x;
        if (a>=y){
            cout << x*y << endl;
        }
        else{
            cout << a*x+1 << endl;
        }
    }
    return 0;
}
