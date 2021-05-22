#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int A , B , L;
        cin >> A >> B >> L;
        cout << (B + (100-A)*L)*10 << endl;
    }
    return 0;
}
