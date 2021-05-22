#include <iostream>
using namespace std;
int arr[100001];
int dp[100001];
void left_max(int no, int start){
    static int max = arr[0];
    if (arr[start] > dp[start-1])
        dp[start] = arr[start];
    else
        dp[start] = dp[start-1];
    if(start!=no){
    cout << dp[start] << " ";
    left_max(no,start+1);
    }
    else
        cout << dp[start] <<endl;


}
int main() {
    int n;
    cin >>n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dp[0] = arr[0];
    cout << arr[0] << " ";
    left_max(n-1, 1);
    return 0;
}