#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int games;
        cin >> games;
        while (games--){
            int rounds;

            int head_tails;
            cin >> head_tails;
            cin >> rounds;
            int guess;
            cin >> guess;
            bool arr[rounds];
            if (head_tails == 1) {
                for (int i = 0; i < rounds; ++i) {
                    arr[rounds] = true;
                }
            }
            else{
                for (int i = 0; i < rounds; ++i) {
                    arr[rounds] = false;
                }
            }
            while (rounds--){
                for (int i = 0; i < rounds; ++i) {
                    if (arr[i] == true)
                        arr[i] = false;
                    else
                        arr[i] = true;
                }
            }
            int count {0};
            for (int i = 0; i <sizeof(arr); ++i) {
                if(arr[i] == true)
                    count++;
            }
            if(guess == 1){
                cout << count << endl;
            } else
                cout << sizeof(arr) - count << endl;


        }
    }
    return 0;
}
