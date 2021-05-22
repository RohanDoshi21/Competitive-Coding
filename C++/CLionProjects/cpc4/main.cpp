#include <iostream>
#include <string>
using namespace std;

bool check(const string &s1, const string &s2, int &minToDelete)
{
    minToDelete = 0;
    bool anySubSeqFound = false;

    if (s2.empty())
        return false;

    string::size_type first = 0;
    while ((first = s1.find(s2[0], first)) != string::npos)
    {
        int numDeleted = 0;
        bool isSubSeq = true;

        string::size_type next = first + 1;
        for(string::size_type j = 1; j < s2.size(); ++j)
        {
            string::size_type found = s1.find(s2[j], next);
            if (found == string::npos)
            {
                isSubSeq = false;
                break;
            }
            numDeleted += (found - next);
            next = found + 1;
        }

        if (isSubSeq)
        {
            if (anySubSeqFound)
            {
                if (numDeleted < minToDelete)
                    minToDelete = numDeleted;
            }
            else
            {
                anySubSeqFound = true;
                minToDelete = numDeleted;
            }
        }

        ++first;
    }

    return anySubSeqFound;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int minToDelete;
        string s1, s2;
        cin >> s1 >> s2;
        if (check(s1, s2, minToDelete))
            cout << "YES " << minToDelete << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}