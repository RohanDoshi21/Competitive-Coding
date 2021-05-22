
#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

unsigned long long getMinNum(int N)
{

    int lcm = 1;
    for (int i = 2; i <= N; i++)
        lcm = ((i * lcm) / (__gcd(i, lcm)));

    return (lcm - 1 )%M;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cout << getMinNum(N) << endl;
    }
    return 0;
}