#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int am,bm,cm,a,b,c,tm;
        cin >> am >> bm >> cm >> tm >> a >> b >> c;
        if (a>=am && b >=bm && c>=cm && a+b+c>=tm){
            cout << "YES" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}
