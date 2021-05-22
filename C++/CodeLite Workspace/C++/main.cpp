#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "hi i am rohan doshi and i must tell you that i am a good and a great boy ";
    long int h = 0;
    for(char i : s1){
        long int x =1;
        x = x << (s1[i]-97);
        if((x&h)>0)
            cout << "Duplicate :" << s1[i] << endl;
        else
            h = x|h;
    }
    return 0;
}
