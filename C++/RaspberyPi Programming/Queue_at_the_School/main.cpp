#include<iostream>
#include<string>
using namespace std;

int main(){
        string s1;
        int time_after;
        int c3;
        cin >> c3;
        cin >> time_after;
        cin >> s1;
        while(time_after--)
        {
            for(int j = 0; j < c3; j++){
            if( (int)s1[j] < (int)s1[j+1] )
                {
                char temp;
                temp = s1[j+1];
                s1[j+1] = s1[j];
                s1[j] = temp;
            }
            
            }
        }
        cout << s1;
    return 0;
}