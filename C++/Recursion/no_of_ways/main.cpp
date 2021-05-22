#include <iostream>
#include <vector>
#define ll long long 
using namespace std;
const unsigned int M = 1000000007;
//int mod = 10e9+7;
int main() {
    int sum, end;
    cin >> sum >> end;
    vector<ll> dp(end+1,0);
    dp[sum] = 1;
    for (size_t i = sum; i <= end; i++)
    {
        for (size_t j = 1; j <= 3; j++)
        {
            if (j>i)continue;
            dp[i] = (dp[i]%M + dp[i-j]%M)%M;
        }
    }
    cout << dp[end]%M << endl;
    return 0;
}   