#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mk make_pair
#define vi vector<int>
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9

void Rohan();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        Rohan();
        cout << endl;
    }

    return 0;
}

void Rohan()
{
    int m, x;
    cin >> m >> x;
    cout << abs(m-(x-m));
}