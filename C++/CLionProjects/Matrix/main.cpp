#include <iostream>

using namespace std;
//class Player{

//};

int main() {
    bool xo[9] = {false};
    int count;
    bool tie = false;
    //bool win = false;
    bool turn = false;
    //bool all_true = false;
    int counter = 0;

    do {
        count = 0;
        int play ;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << xo[count] << "(" << count + 1 << ")" << "   ";
                count++;
            }
            cout << endl;
        }
        if(!turn)
        cout << "player " << 2 << "turn";
        else
            cout << "player " << 1 << "turn";

        do {
            cin >> play;
        } while (play<0 || play > 10);

        xo[play - 1] = true;
        counter++;
        if(counter == 9){
            tie = true;
            //break;
        }
        if(!turn)
            turn = true;
        else
            turn = false;


    }

    while(!tie);
    return 0;
}
