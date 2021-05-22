#include <iostream>
#include <string>
using namespace std;
int start(int start, string s1, int str_len, int pair){
    if(start == str_len-1){
        return
    }
    for (int i = start; i < str_len-1; ++i) {
        if(s1[i] != s1[i+1]) {
            start++;
            break;
        }
        else {
            start++;
            pair++;
        }

    }
}
int ispair(string s1, int str_len){
    int pair_len = 1;
    for (int i = 0; i < str_len-1; ++i) {
        if(s1[i] != s1[i+1])
            break;
        else
            pair_len++;
    }
    return pair_len;
}
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int string_len;
        while ()
        string s1;
        cin >> s1;

    }
    return 0;
}
