#include <iostream>
using namespace std;

int main() {
    for (size_t i = 0; i < 16; i++)
    {
        cout << i++ << "\n";
    }
    size_t x = 12;
    cout << x;
    cout << "This was a program to display numbers from 1 to x";
    return 0;
}