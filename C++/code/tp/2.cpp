#include <iostream>
using namespace std;
int lowest_set_bit(int num)
{
    return num & (-num);
}
int main()
{
    int num = 4;
    int ans = lowest_set_bit(num);
    cout << ans << endl;
    return 0;
}