#include <iostream>

#define ll unsigned long long

unsigned int nextPowerOf2(unsigned int n)
{
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n++;
    return n;
}

using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        ll r;
        cin >> r;
        ll b;
        ll max = 0;

        ll j1 = nextPowerOf2(r);

        for ( ll j = j1; j >j1/2 ; --j) {
            b = j ^ r;
            if (max<b*j && b<j1)
                max = b*j;
        }
        cout << max << endl;
    }
    return 0;
}
