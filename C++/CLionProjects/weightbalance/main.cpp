#include <iostream>
using namespace std;
int min(int x1, int x2){
    if (x2 > x1)
        return x1;
    else
        return x2;
}
int max(int x1, int x2){
    if (x1 > x2)
        return x1;
    else
        return x2;
}
int main() {
    int t;
    cin >> t;
    while (t--){
        int w1,w2,x1,x2,m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        if (max(x1,x2)*m >= w2-w1 && w2-w1 >=min(x1,x2)*m)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
