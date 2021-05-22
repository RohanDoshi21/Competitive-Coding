#include <iostream>
using namespace std;
#define ll double
ll log2(ll n){
    if(n<2){
        return 0;
    }
    return 1 + log2(n/2);
}
int main() {
    ll n;
    cin >> n;
    cout << log2(n);
    return 0;
}