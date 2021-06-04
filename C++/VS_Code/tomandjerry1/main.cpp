#include <iostream>
using namespace std;
int d;
int c;
bool canreach(int a , int b, int k){
    int p, q;
    if (a>c){
         p = a-c;
    }
    else    
         p = c-a;
    if (b>d)
        q = b-d;
    else
        q = d-b;
    if(k >= p+q)
        return true;
    else
        return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a  , b , k;
        cin >> a >> b >> c >> d >> k;
        cout << canreach(a,b,k) << endl;
        
    }
    return 0;
}