#include <iostream>
using namespace std;

int main() {

    int *p = new int[3];
    for (size_t i = 0; i < 6; i++)
    {
        cin >> p[i];
    }

    for (size_t i = 0; i < 6; i++)
    {
        cout << p[i] << "\n";
    }

    for (size_t i = 0; i < 3; i++)
    {
        cout << &p[i] <<"\n";
    }
    delete p;
    cout << p[1];


    return 0;
}