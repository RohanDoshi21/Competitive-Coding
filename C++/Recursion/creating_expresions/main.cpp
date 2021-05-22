#include <iostream>
using namespace std;
//int dp[25];
int arr[21];
bool create_expression(int n, int x){
    if ((n==0 && x-arr[n] == 0) || (n==0 && x+arr[n] == 0)) 
        return true;
    else if(n==0)
        return false;
    bool c1 = create_expression(n-1,x - arr[n]);
    bool c2 = create_expression(n-1,x + arr[n]);
    return c1||c2;
}
int main() {
    int n,x;
    cin >> n >> x;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool y = create_expression(n-1,x);
    if(y == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}