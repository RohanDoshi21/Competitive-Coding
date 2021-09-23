#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >>x;
        int i = pow(10,x-1)+1;
        while(true){
            if(i%3 == 0 && i%9 != 0 && i%2!=0){
                cout << i << '\n';
                break;
            }
            i +=1;
        }

    }
    return 0;
}