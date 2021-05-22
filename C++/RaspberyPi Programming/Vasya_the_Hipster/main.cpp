#include<iostream>
using namespace std;

int main(){
        int blue_sock;
        int red_sock;
        cin >> blue_sock >> red_sock;
        if(blue_sock >= red_sock)
            cout << red_sock << endl;
        else 
            cout << blue_sock << endl;
        if(blue_sock >= red_sock)
        {
            blue_sock -= red_sock;
            cout << blue_sock/2;
            
        }
        else 
        {
            red_sock -= blue_sock;
            cout << red_sock/2;
        }
            
    return 0;
}