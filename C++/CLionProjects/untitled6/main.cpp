#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int checkIfSub(string s1, string s2, int n, int m)
{
    int j = 0;
    for(int i = 0; i < n && j < m; i++)
        if(s1[i] == s2[j])
            j++;
    if(j == m)
        return 0;
    else
        return 1;
}
int check(string s1, string s2)
{
    int n=s1.length();
    int m=s2.length();
    int sum=0;
    int maxofint=1e7;
    if(checkIfSub(s1, s2, n, m ) == 1 || m > n) {
        cout << "NO" << endl;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        int j=0;
        sum=0;
        for(int k=i;k<n && j<m;k++)
        {
            if(s1[k] == s2[j])
                j++;
            else
                sum++;
        }
        if(j==m)
            maxofint=min(maxofint, sum);
    }
    maxofint == 1e7 ? cout << "NO" << endl : cout << "YES" << " " << maxofint << endl;
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