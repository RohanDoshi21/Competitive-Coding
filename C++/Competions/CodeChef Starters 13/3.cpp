#include <iostream>
using namespace std;

string changestring(string s1)
{
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '0')
        {
            s1[i] = '1';
        }
        else
        {
            s1[i] = '0';
        }
    }
    return s1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string path;
        cin >> path;
        int position = 0;
        int count = 0;
        while (position < (path.length() / 2))
        {
            if (path[position] == '1')
            {
                position++;
            }
            else
            {
                path = changestring(path);
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}