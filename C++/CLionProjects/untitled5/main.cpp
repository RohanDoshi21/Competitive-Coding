#include <iostream>
#include <string>
using namespace std;

int checkIfSub(string s1, string s2, int m, int n)
{
    int j = 0;
    for(int i = 0; i < m && j < n; i++)
        if(s1[i] == s2[j])
            j++;
    if(j == n)
        return 0;
    else
        return 1;
}
int check(string s1, string s2)
{
    int count = 0;
    if(checkIfSub(s1, s2, s1.length(), s2.length()) == 1 || s2.length() > s1.length()) {
        cout << "NO" << endl;
        return 0;
    }

    int j = 0;
    int z = s2.length();
    int p = s2.length();
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == s2[j] && z!=0)
        {
            z--;
            j++;
        }
        else if (j>0 && z!=0){
                count++;
        }
    }
    cout << "YES " << count << endl;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {

        string s1, s2;
        cin >> s1 >> s2;
        check(s1, s2);
    }
    return 0;
}