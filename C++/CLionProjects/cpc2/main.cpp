#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if((b-a)==0){
            cout << "YES" << endl;
        }
        else if ((d-c)==0){
            cout << "NO" << endl;
        }
        else if ((b-a)%(d-c)==0){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
