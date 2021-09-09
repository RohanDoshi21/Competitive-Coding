#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string sample;
        cin >> sample;
        int total_min = 0;
        for (size_t i = 0; i < n; i++)
        {
            if (sample[i] == '0')
                total_min += a;

            else
                total_min += b;
        }
        cout << total_min << endl;
    }
    return 0;
}