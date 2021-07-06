#include <iostream>
using namespace std;

int main() {
    int initial_strengh;
    cin >> initial_strengh;
    int no_of_battles;
    cin >> no_of_battles;
    int x[no_of_battles];
    int y[no_of_battles];
    for (int i = 0; i < no_of_battles; i++){
        cin >> x[i];
    }
    for (int i =0; i < no_of_battles; i++){
        cin >> y[i];
    }
    bool win = true;
    for (int i =0; i < no_of_battles; i++){
        if (initial_strengh > x[i]){
            initial_strengh += y[i];
        }
        else{
            win = false;
            break;
        }
           
    }
    if (win == true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}