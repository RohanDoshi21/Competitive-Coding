#include <iostream>
using namespace std;

string changeString(string s1, int position)
{
    for (int i = position; i < s1.length(); i++)
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
        while (position < path.length())
        {
            if (path[position] == '1')
            {
                position++;
            }
            else
            {
                path = changeString(path, position);
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}