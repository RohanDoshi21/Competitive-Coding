#include <iostream>
#include <vector>
#define ll long long 
using namespace std;
const unsigned int M = 1000000007;
//int mod = 10e9+7;
int main() {
    int sum;
    cin >> sum;
    vector<ll> dp(sum+1,0);
    dp[0] = 1;
    dp[1] = 1;
    for (size_t i = 2; i <= sum; i++)
    {
        for (size_t j = 1; j <= 6; j++)
        {
            if (j>i)continue;
            dp[i] = (dp[i]%M + dp[i-j]%M)%M;
        }
    }
    cout << dp[sum]%M << endl;
    return 0;
}   