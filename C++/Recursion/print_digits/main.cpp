#include <iostream>
using namespace std;
void print_digits(int n){
    if(n!=0){
        print_digits(n/10);
        
        cout << n%10 <<" ";
    }
    //cout << "*";
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        print_digits(n/10);
        cout << n%10 << endl;
    }
    return 0;
}