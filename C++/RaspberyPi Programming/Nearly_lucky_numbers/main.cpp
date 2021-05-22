#include<iostream>
#include<string>
using namespace std;

int main(){
        string lucky_number;
            cin >> lucky_number;
            int count_1;
            for(int i = 0; i < lucky_number.length(); i++)
            {
                if(lucky_number[i]=='4' || lucky_number[i]=='7')
                {
                    count_1++;
                }
            }
            if(count_1 == 4 || count_1 == 7)
            {
                cout << "YES";
            }
            else
                cout << "NO";
    return 0;
}