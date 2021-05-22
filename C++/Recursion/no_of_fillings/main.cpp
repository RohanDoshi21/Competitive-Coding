#include <iostream>
using namespace std;
int no_cons_1s(int n){
    if (n == 1) return 2;
    if (n == 2) return 3;
    return no_cons_1s(n-1) + no_cons_1s(n-2);
}
int main() {
    int n;
    cin >> n;
    cout << no_cons_1s(n);  
    return 0;
}

