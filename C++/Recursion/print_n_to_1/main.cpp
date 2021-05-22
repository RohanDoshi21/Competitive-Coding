#include <iostream>
using namespace std;
void recursion(int n){
    if(n>1){
        cout << n << " ";
        recursion(n-1);
    }
}
int main() {
    int n;
    cin >> n;
    recursion(n);
    cout << 1;
    return 0;
}