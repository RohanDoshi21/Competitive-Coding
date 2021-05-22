#include <iostream>
#define ll long long

using namespace std;
#define nil -1
#define max 100
ll lookup[max];
void initialize(){
    for (long long &i : lookup) i = nil;
}
ll fibonacci(ll n){
    if (lookup[n]==nil) {
        if (n <= 1) lookup[n] = n;
        else lookup[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return lookup[n];
}
int main() {
    initialize();
    ll n;
    cin >>n;
    cout << fibonacci(n) << endl;
    return 0;
}
