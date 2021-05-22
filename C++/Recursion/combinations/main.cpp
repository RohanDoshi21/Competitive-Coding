#include <iostream>
#define ll unsigned long long 
using namespace std;
ll permutions(ll n){
    if(n>1){
        return n*permutions(n-1);
    }
    return 1;
}
ll combinations(int n, int r){
    ll numerator = permutions(n);
    ll denominator = permutions(n-r);
    ll denominator2 = permutions(r);
    return (numerator/denominator)/denominator2;
}
int main() {
    int n, r;
    cin >> n >> r;
    cout << combinations(n,r);
    return 0;
}