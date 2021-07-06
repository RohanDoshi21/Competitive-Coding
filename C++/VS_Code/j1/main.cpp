#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--) 
    {
        int s;
        cin >> s;
        int c;
        cin >> c;
        int k;
        cin >> k;
        if ( s==1){
            cout << s << endl;
        }
        else {
             cout << (c + k -1)%s << endl;
        }
    }
    
    return 0;
}