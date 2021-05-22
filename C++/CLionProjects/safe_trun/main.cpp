#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        float u,v,a,s;
        cin >> u >> v >> a >> s;
        float root = u*u - 2*a*s;
        if(root < 0 || v >= sqrt(root))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
