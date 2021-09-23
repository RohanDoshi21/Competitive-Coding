#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int z = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> x;
            if (x == 1)
                z++;
        }
        z > 3 ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}