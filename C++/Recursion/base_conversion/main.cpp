#include <iostream>
using namespace std;
void binary(int n){
    if(n>0){
        binary(n/2);
        cout << n%2;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        binary(n);
        cout << endl;
    }
    return 0;
}