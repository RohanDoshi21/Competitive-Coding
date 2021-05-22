#include <iostream>
using namespace std;
void recursion(int n){
    static int p = n+1;
    if(n>0){
        cout << p-n << endl;
        recursion(n-1);
    }
}
int main() {
    int n;
    cin >> n;
    recursion(n);
    return 0;
}