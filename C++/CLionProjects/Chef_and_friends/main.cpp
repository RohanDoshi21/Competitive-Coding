#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string s1;
        cin >> s1;
        int group {0};
        for (int j = 0; j < s1.length(); ++j) {
            if(s1[j] == '1') {
                group++;
                while (s1[j] == '1') {
                    j++;
                }
            }
        }
        cout << group << endl;
    }
    return 0;
}
