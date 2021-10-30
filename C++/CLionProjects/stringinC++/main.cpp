#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    string b;
    cin >> a >> b;
    cout << a.size() << " " << b.size()<<endl;
    cout << a+b << endl;
    char c[a.size()+1], dvar[b.size()+1];
    c[0] = b[0];
    c[a.size()] = '\0';
    dvar[b.size()] ='\0';
    dvar[0] = a[0];
    for (int i = 1; i < a.size(); ++i) {
        c[i] = a[i];
    }
    for (int i = 1; i < b.size(); ++i) {
        dvar[i] = b[i];
    }
    cout << c << endl;
    cout << dvar << endl;
 }
