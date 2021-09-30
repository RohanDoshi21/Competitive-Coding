#include <iostream>
using namespace std;
#define ll long long
#define nil -1
#define max 100

ll fib[max];
void initialize(){
    for (size_t i = 0; i < max; i++)
    {
        fib[i] = nil;
    }
    
}
ll fibonacci(ll n){
    if (fib[n] == nil){
    if (n<=1) fib[n] = n;
    else fib[n]= fibonacci(n-1) + fibonacci(n-2);
    }
    return fib[n];
}

int main() {
    initialize();
    ll n;
    cin >> n;
    cout << fibonacci(n) << endl;
    for (size_t i = 0; i < n+1; i++)
    {
        cout << fib[i] << " ";
    }
    
    return 0;
}