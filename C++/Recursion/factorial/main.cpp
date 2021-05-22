#include <iostream>
using namespace std;
#define ll long long
ll result[21] = {0};
ll factorial(ll n){
    if(n==1)
        return 1;
    else
    {
        if(result[n]!=0)
            return result[n];
        else
            return result[n] = n*factorial(n-1);
    }
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}