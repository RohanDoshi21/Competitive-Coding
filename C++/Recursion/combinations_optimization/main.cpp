#include <iostream>
#define ll unsigned long long 
using namespace std;
ll permutions(ll n, ll end){
    if(n>1 && end>0){
        return n*permutions(n-1,end-1)/permutions(end,end-1);
    }
    return 1;
}
ll combinations(int n, int r){
    if(r>n)
        return 0;
    else {
    ll numerator = permutions(n,r);
    //ll denominator = permutions(n-r);
    //ll denominator2 = permutions(r,r);
    return numerator;
    }
}
int main() {
    int n, r;
    cin >> n >> r;
    int x = combinations(n,r);
    cout << x;
    return 0;
}