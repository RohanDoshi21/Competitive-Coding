#include <iostream>
using namespace std;
#define ll long long
ll seqence(ll n){
    static int length = 1;
    if(n>1){
    if(n%2==0){
        length++;
        seqence(n/2);
    }
    else{
        length++;
        seqence(3*n+1);
    }
    }
    else{
        return 1;
    }
    return length;
}

int main() {
    int n;
    cin >> n;
    cout << seqence(n);
    return 0;
}