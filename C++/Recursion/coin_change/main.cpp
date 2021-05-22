#include <iostream>
#include <vector>
#define ll long long  
const unsigned int M = 1000000007;
using namespace std;

int main() {
    int sum;
    int no_of_coins;
    cin >> sum >> no_of_coins;
    vector<ll> dp(sum+1,0);
    vector<ll> coins(no_of_coins);

    for (int i = 0; i < no_of_coins;i++){   
        cin >> coins[i]; 
    }
    dp[0] = 1;
    for (size_t i = 1; i <= sum ; i++)
    {
        for (size_t j = 0; j <= no_of_coins-1; j++)
        {
            if (coins[j]>i)
            {
                continue;   
            }
            dp[i] = (dp[i] + dp[i-coins[j]])%M;
        }
    }
    cout << dp[sum] << endl;
    return 0;
}
