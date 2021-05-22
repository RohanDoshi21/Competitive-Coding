#include <iostream>
#include <string>
using namespace std;
int find_vovels(string s1, int length){
    static int count = 0;
    if(length>0){
        if (s1[length-1] == 'a' || s1[length-1] == 'e' || s1[length-1] == 'i' || s1[length-1] == 'o' || s1[length-1] == 'u' || 
        s1[length-1] == 'A' || s1[length-1] == 'E' || s1[length-1] == 'I' || s1[length-1] == 'O' || s1[length-1] == 'U'){
            count++;
        }
        find_vovels(s1, length-1);
    }
        return count;   
}
int main() {
    string s1;
    getline(cin,s1);
    //cout << s1.length() << endl;
    cout << find_vovels(s1, s1.length());
    return 0;
}