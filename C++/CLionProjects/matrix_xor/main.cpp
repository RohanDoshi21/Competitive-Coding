#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int row, column;
        cin >> row >> column;
        int p;
        cin >> p;
        int xors = 0;
        int arr[row][column];
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < column; ++j) {
                arr[i][j] = p + (i+1) + (j+1);
                xors ^= arr[i][j];

            }
        }
        cout << xors << endl;
    }
    return 0;
}
