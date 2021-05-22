#include <iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "hi i am rohan doshi and i am a good boy";
    long int h = 0;
    for (char i : s1){
        long int x = 1;
        x = x << (i - 97);
        if ((x&h)>0)
        {
            cout << "Duplicate found " << i << endl;
        }
        else
            h = x | h;
    }
    return 0;
}

