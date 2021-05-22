#include <iostream>
using namespace std;
#define ll long long
ll result[31] = {-1};
ll fibonacci(ll n){
    if(result[n] == -1){
        if(n<=1)
            result[n] = n;
        else
            result[n] = fibonacci(n-1) + fibonacci(n-2);
    }
    return result[n];
}
int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}