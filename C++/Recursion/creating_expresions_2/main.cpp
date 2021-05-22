#include <iostream>
using namespace std;
//int dp[25];
int arr[21];
int n,x;
bool create_expression(int n1, int x1){
    if ((n1==n && x1 == 0))
        return true;
    else if(n1==n)
        return false;
    bool c1 = create_expression(n1+1,x1 - arr[n1]);
    bool c2 = create_expression(n1+1,x1 + arr[n1]);
    return c1||c2;
}
int main() {

    cin >> n >> x;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool y = create_expression(1,x-arr[0]);
    if(y == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}