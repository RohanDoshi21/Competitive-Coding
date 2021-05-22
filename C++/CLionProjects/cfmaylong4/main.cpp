#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        char arr[9];
        int xcount = 0;
        int ocount = 0;
        int spacecount = 0;
        /*
           my array is

           0 1 2
           3 4 5
           6 7 8

         */
        for (char & i : arr) {
            cin >> i;
            if (i == 'X')
                xcount++;
            else if (i == 'O')
                ocount++;
            else
                spacecount++;
        }
        // attempt 1 hard coding

        //winner logic
        bool win_player_1 = false;
        bool win_player_2 = false;
        if (arr[0] == arr[1] && arr[1]==arr[2] && arr[1]=='X'){
            win_player_1=true;
        }
        if (arr[3] == arr[4] && arr[4]==arr[5] && arr[4]=='X'){
            win_player_1=true;
        }
        if (arr[6] == arr[7] && arr[7]==arr[8] && arr[8]=='X'){
            win_player_1=true;
        }


        if (arr[0] == arr[1] && arr[1]==arr[2] && arr[1]=='O'){
            win_player_2=true;
        }
        if (arr[3] == arr[4] && arr[4]==arr[5] && arr[4]=='O'){
            win_player_2=true;
        }
        if (arr[6] == arr[7] && arr[7]==arr[8] && arr[8]=='O'){
            win_player_2=true;
        }


        if (arr[0] == arr[3] && arr[3]==arr[6] && arr[6]=='X'){
            win_player_1=true;
        }
        if (arr[1] == arr[4] && arr[4]==arr[7] && arr[7]=='X'){
            win_player_1=true;
        }
        if (arr[2] == arr[5] && arr[2]==arr[8] && arr[8]=='X'){
            win_player_1=true;
        }


        if (arr[0] == arr[3] && arr[3]==arr[6] && arr[6]=='O'){
            win_player_2=true;
        }
        if (arr[1] == arr[4] && arr[4]==arr[7] && arr[7]=='O'){
            win_player_2=true;
        }
        if (arr[2] == arr[5] && arr[2]==arr[8] && arr[8]=='O'){
            win_player_2=true;
        }


        if (arr[0] == arr[4] && arr[4]==arr[8] && arr[8]=='X'){
            win_player_1=true;
        }
        if (arr[2] == arr[4] && arr[4]==arr[6] && arr[6]=='X'){
            win_player_1=true;
        }


        if (arr[0] == arr[4] && arr[4]==arr[8] && arr[8]=='O'){
            win_player_2=true;
        }
        if (arr[2] == arr[4] && arr[4]==arr[6] && arr[6]=='O'){
            win_player_2=true;
        }


        //output logic

        if ((win_player_1==1 && win_player_2==1) || (xcount-ocount<0) || (xcount-ocount>1))
            cout<<"3"<<endl;
        else if (xcount==0 && ocount==0 && spacecount==9)
            cout <<"2"<<endl;
        else if (win_player_1==1 && win_player_2==0 && xcount>ocount)
            cout <<"1"<<endl;
        else if (win_player_1==0 && win_player_2==1 && xcount==ocount)
            cout<<"1"<<endl;
        else if (win_player_1==0 && win_player_2==0 && spacecount==0)
            cout<<"1"<<endl;
        else if (win_player_1==0 && win_player_2==0 && spacecount>0)
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
    }
    return 0;
}
