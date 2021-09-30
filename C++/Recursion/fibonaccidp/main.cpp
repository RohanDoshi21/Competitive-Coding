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
    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << "\n";
    }
    return 0;
}